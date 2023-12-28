#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100005];
int depth[100005];

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    depth[node] = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (depth[u] == -1)
            {
                q.push(u);
                depth[u] = depth[v] + 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
            depth[i] = -1;
        }
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(1);
        int leaf = max_element(depth + 1, depth + n + 1) - depth;
        fill(depth + 1, depth + n + 1, -1);
        bfs(leaf);
        leaf = max_element(depth + 1, depth + n + 1) - depth;
        cout << (depth[leaf] + 1) / 2 << "\n";
    }

    return 0;
}
