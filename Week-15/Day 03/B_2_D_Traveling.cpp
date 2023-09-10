/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
ll cost(ll x1, ll y1, ll x2, ll y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}
int minCost(int cost[100][100], int m, int n)
{
    int i, j;
    int dp[100][100];

    dp[0][0] = cost[0][0];

    for (i = 1; i <= m; i++)
    {
        dp[i][0] = dp[i - 1][0] + cost[i][0];
    }
    for (j = 1; j <= n; j++)
    {
        dp[0][j] = dp[0][j - 1] + cost[0][j];
    }
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + cost[i][j];
        }
    }
    return dp[m][n];
}
void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<int, int>> city(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> city[i].first >> city[i].second;
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