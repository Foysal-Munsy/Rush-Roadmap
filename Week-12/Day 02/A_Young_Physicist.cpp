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
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define cin_array(x, o, n)       \
    for (int i = o; i <= n; i++) \
    {                            \
        cin >> x[i];             \
    }
#define cout_array(x, o, n)      \
    for (int i = o; i <= n; i++) \
    {                            \
        cout << x[i] << " ";     \
    }                            \
    cout << nl;
#define cin_vector(v, o, n)      \
    for (int i = o; i <= n; i++) \
    {                            \
        ll x;                    \
        cin >> x;                \
        v.push_back(x);          \
    }
#define cout_vector(v, o, n)     \
    for (int i = o; i <= n; i++) \
    {                            \
        cout << v[i] << " ";     \
    }                            \
    cout << nl;
#define nl '\n'
/*
It is better to end a day solving a simple problem than
to end a day without solving any problem.
A wise programmer said it, and I accepted his voice in my heart.
*/
void solve()
{
    ll n;
    cin >> n;
    ll xx = 0, yy = 0, zz = 0, sum = 0;
    for (; n--;)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        xx += x;
        yy += y;
        zz += z;
    }
    // sum += xx + yy + zz;
    // cout << xx;
    if (xx == 0 && yy == 0 && zz == 0)
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
    ll t = 1; // cin>>t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}