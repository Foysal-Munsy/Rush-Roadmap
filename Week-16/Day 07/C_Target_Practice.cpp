/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/21         *
 *    Time: 21:09:28           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    vector<vector<char>> v(11, vector<char>(11));
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> v[i][j];
        }
    }

    int ANS = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (v[i][j] == 'X')
            {
                if (i <= 5)
                {
                    if (j <= 5)
                        ANS += min(i, j);
                    else
                        ANS += min(i, 10 - j + 1);
                }
                else
                {
                    if (j <= 5)
                        ANS += min(10 - i + 1, j);
                    else
                        ANS += min(10 - i + 1, 10 - j + 1);
                }
            }
        }
    }
    cout << ANS << nl;
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
