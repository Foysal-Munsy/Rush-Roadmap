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
#define PI 3.14159265358979323846
#define nl '\n'

// TLE
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &v : a)
        cin >> v;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll x = a[i] & a[j];
            ll y = a[i] ^ a[j];
            if (x >= y)
                count++;
        }
    }
    cout << count << nl;
}
void solution()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &v : a)
        cin >> v;
    vector<ll> vis(n, 0);
    ll count = 0;
    for (ll i = 31; i >= 0; i--)
    {
        ll num = 0;
        for (ll j = 0; j < n; j++)
        {
            if ((1 << i) & (a[j]) && !vis[j])
                num++;
        }
        if (num)
        {
            for (ll j = 0; j < n; j++)
            {
                if ((1 << i) & (a[j]) && !vis[j])
                    vis[j] = 1;
            }
            count += (num * (num - 1)) / 2;
        }
    }
    cout << count << nl;
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
        // solve();
        solution();
        cs++;
    }
    return 0;
}