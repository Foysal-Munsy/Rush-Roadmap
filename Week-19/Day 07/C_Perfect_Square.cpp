/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/12         *
 *    Time: 23:58:05           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<string> vec;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vec.push_back(s);
    }

    ll ans = 0;
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < n / 2; j++)
        {
            char arr[] = {vec[i][j], vec[n - 1 - j][i], vec[n - 1 - i][n - 1 - j], vec[j][n - 1 - i]};
            char ch = 'a';
            for (ll k = 0; k < 4; k++)
            {
                ch = max(ch, arr[k]);
            }

            for (ll k = 0; k < 4; k++)
            {
                ans += (ch - arr[k]);
            }
        }
    }

    cout << ans << endl;
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