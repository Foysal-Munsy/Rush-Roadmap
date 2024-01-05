#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    map<int, int> pos;
    for (int i = 0; i < n; i++)
    {
        pos[b[i]] = i;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || pos[a[i - 1]] + 1 != pos[a[i]])
        {
            cnt++;
        }
    }
    if (cnt <= k)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
        solve();
    }
    return 0;
}
