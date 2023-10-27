/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/23         *
 *    Time: 19:33:27           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int convert(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

void solve()
{
    int x, k;
    cin >> x >> k;
    int sum = convert(x);
    if (sum % k == 0)
    {
        cout << x << nl;
    }
    else
    {
        if (x < k)
        {
            int y = convert(k);
            if (y > x)
                cout << k << nl;
            else
            {
                //
                int ans = 0;
                while (true)
                {
                    x++;
                    int a = convert(x);
                    if (a % k == 0)
                    {
                        ans = x;
                        break;
                    }
                }
                cout << ans << nl;
            }
        }
        else
        {
            //
            int ans = 0;
            while (true)
            {
                x++;
                int a = convert(x);
                if (a % k == 0)
                {
                    ans = x;
                    break;
                }
            }
            cout << ans << nl;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}