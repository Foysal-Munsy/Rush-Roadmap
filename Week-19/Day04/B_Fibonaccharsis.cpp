/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/09         *
 *    Time: 20:53:39           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > 30)
    {
        cout << "0\n";
        return;
    }

    // ....22-x  x  22
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        // y--> i=0,1,2...  and x = 22
        int y = i, x = n;
        bool flag = true;
        for (int j = 1; j <= k - 2; j++)
        {
            // z= third - y
            int z = x - y;
            x = y;
            y = z;
            if (y <= x and y > -1)
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            count++;
    }
    cout << count << nl;
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