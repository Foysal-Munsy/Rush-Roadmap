/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/20         *
 *    Time: 11:35:33           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Calculate the maximum sum
            int res = 0;
            int idx = 0;
            while (i - idx > -1 and j - idx > -1)
            {
                res += arr[i - idx][j - idx];
                idx++;
            }

            idx = 0;
            while (i - idx > -1 and j + idx < m)
            {
                res += arr[i - idx][j + idx];
                idx++;
            }

            idx = 0;
            while (i + idx < n and j + idx < m)
            {
                res += arr[i + idx][j + idx];
                idx++;
            }

            idx = 0;
            while (i + idx < n and j - idx > -1)
            {
                res += arr[i + idx][j - idx];
                idx++;
            }
            res -= 3 * (arr[i][j]);
            ans = max(ans, res);
        }
    }
    cout << ans << nl;
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
