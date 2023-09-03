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
    int n;
    cin >> n;
    int m = n - 1;
    vector<bool> visited(n + 1, false);
    vector<vector<int>> in(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> in[i][j];
        }
    }
    sort(in.begin(), in.end());

    vector<int> not_visited;
    for (int i = 0; i < n; i++)
    {
        vector<bool> visited(n + 1, false);
        for (int j = 0; j < m; j++)
        {
            visited[in[i][j]] = true;
        }
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                not_visited.push_back(j);
                break;
            }
        }
    }
    for (auto i : not_visited)
        cout << i << " ";

    cout << nl;
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