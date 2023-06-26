#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

vector<int> solve(string s)
{
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INF));
    vector<vector<int>> prev(n + 1, vector<int>(n + 1, -1));
    dp[1][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i + 1; k <= n; k++)
            {
                int cost = abs((s[i - 1] - 'a' + 1) - (s[k - 1] - 'a' + 1));
                if (dp[k][j + 1] > dp[i][j] + cost)
                {
                    dp[k][j + 1] = dp[i][j] + cost;
                    prev[k][j + 1] = i;
                }
            }
        }
    }

    int min_cost = INF;
    int max_jumps = 0;
    for (int j = 0; j <= n; j++)
    {
        if (dp[n][j] < min_cost)
        {
            min_cost = dp[n][j];
            max_jumps = j;
        }
    }

    vector<int> path;
    int cur_tile = n;
    int cur_jumps = max_jumps;
    while (cur_tile != -1)
    {
        path.push_back(cur_tile);
        cur_tile = prev[cur_tile][cur_jumps];
        cur_jumps--;
    }

    reverse(path.begin(), path.end());
    return path;
}

int main()
{
    string s;
    cin >> s;

    vector<int> path = solve(s);
    for (int tile : path)
    {
        cout << tile << ' ';
    }
    cout << endl;

    return 0;
}
