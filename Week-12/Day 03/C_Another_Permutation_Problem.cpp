/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define nl '\n'

ll max_cost(ll n, vl &v)
{
    ll a = 0, mx = 0, sum = 0, ans = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        a = (v[i]) * (i + 1);
        mx = max(mx, a);
        sum += a;
        ans = max(ans, sum - mx);
    }
    return ans;
}
void solve()
{
    ll N;
    cin >> N;
    ll ans = 0;
    for (int L = 0; L <= N; L++)
    {
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            if (i < L)
                V[i] = (i + 1) * (i + 1);
            else
                V[i] = (i + 1) * (N - (i - L));
        }
        sort(V.begin(), V.end());
        ll now = 0;
        for (int j = 0; j < N - 1; j++)
            now += V[j];
        ans = max(ans, now);
    }
    cout << ans << "\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}