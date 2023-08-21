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

void solve()
{
    int n;
    cin >> n;
    if (n & 1)
    {
        cout << -1 << nl;
        return;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    reverse(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";
    cout << nl;

    // wrong answer p[p[1]] = 2 not equal to 1
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1; // cin>>t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}