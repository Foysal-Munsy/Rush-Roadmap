#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()

void solve()
{
    int n, q;
    cin >> n >> q;
    map<int, multiset<int>> pos;
    for (int i = 1;i <= n;i++)
    {
        int in;
        cin >> in;
        pos[in].insert(i);
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (sz(pos[a]) == 0 || sz(pos[b]) == 0)
            cout << "NO" << '\n';
        else
        {
            if (*pos[a].begin() < *pos[b].rbegin())
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}