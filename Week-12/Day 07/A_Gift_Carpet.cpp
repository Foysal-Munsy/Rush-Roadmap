/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    char ch[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ch[i][j];
        }
    }
    bool flag = false;
    for (int j1 = 0; j1 < m - 3; j1++)
    {
        bool is_v = false;
        for (int i = 0; i < n; i++)
        {
            if (ch[i][j1] == 'v')
            {
                is_v = true;
                break;
            }
        }
        if (!is_v)
            continue;
        for (int j2 = j1 + 1; j2 < m - 2; j2++)
        {
            bool is_i = false;
            for (int i = 0; i < n; i++)
            {
                if (ch[i][j2] == 'i')
                {
                    is_i = true;
                    break;
                }
            }
            if (!is_i)
                continue;
            for (int j3 = j2 + 1; j3 < m - 1; j3++)
            {
                bool is_k = false;
                for (int i = 0; i < n; i++)
                {
                    if (ch[i][j3] == 'k')
                    {
                        is_k = true;
                        break;
                    }
                }
                if (!is_k)
                    continue;
                for (int j4 = j3 + 1; j4 < m; j4++)
                {
                    bool is_a = false;
                    for (int i = 0; i < n; i++)
                    {
                        if (ch[i][j4] == 'a')
                        {
                            is_a = true;
                            break;
                        }
                    }
                    if (!is_a)
                        continue;
                    flag = true;
                    break;
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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