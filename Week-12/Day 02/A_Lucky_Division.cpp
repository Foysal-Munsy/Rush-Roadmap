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

// 4,7,47,74,44,77,444,447,474,477,744,747,777,774
void generateLuckyNumbers(ll n, vector<ll> &v)
{
    if (n > 0)
    {
        v.push_back(n);
    }
    if (n < 1e3)
    {
        generateLuckyNumbers(n * 10 + 4, v);
        generateLuckyNumbers(n * 10 + 7, v);
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    generateLuckyNumbers(0, v);
    for (auto lucky : v)
    {
        if (n % lucky == 0)
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}
