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
    ll n, k;
    cin >> n >> k;
    // 2x+3y=5
    // long double x = n / 2, y = n / 3;
    // // cout << x << " " << y << nl;
    // ld a = 2 * x, b = k * y;
    // // cout << a << " " << b << nl;

    // 2x + ky = n
    // ky = n - 2x  --> n - 2x must be divisible by k
    // remainder when n is divided by k must be even
    if ((n & 1) == 0 or k & 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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