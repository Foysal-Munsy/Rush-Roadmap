#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

vector<int> calculateWays(int N)
{
    int x = 0;
    vector<int> v;
    for (int i = 0; i < N; i++)
        v.push_back(0);

    for (int i = 0; i <= N / 2; i++)
    {

        if (N % 2 == 0 && i == N / 2)
            break;

        x = N * (i + 1) - (i + 1) * i;
        v[i] = x;
        v[N - i - 1] = x;
    }
    return v;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    ll count = 0;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    vector<int> v;
    v = calculateWays(n);
    for (auto i : v)
        count += i;
    cout << count << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "Case " << cs << ": ";
        solve();
        cs++;
    }
    return 0;
}