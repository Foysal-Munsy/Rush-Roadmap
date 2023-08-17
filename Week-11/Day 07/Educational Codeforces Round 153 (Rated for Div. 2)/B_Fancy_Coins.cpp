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

void test()
{
    int M, K, A1, AK;
    cin >> M >> K >> A1 >> AK;

    int t = min(M / K, AK);
    M -= t * K;

    if (M <= A1)
        cout << "0\n";
    else
    {
        int r = M - A1;
        int ans = r / K + r % K;
        int u = (K - r % K) % K;
        if (u <= A1)
        {
            ans = min(ans, (r + u) / K);
        }
        cout << ans << "\n";
    }
}
void solve()
{
    ll given, k, ekTk, kTk;
    cin >> given >> k >> ekTk >> kTk;

    ll mot_tk = min(given / k, kTk);
    ll result = given - (mot_tk * kTk);
    // cout << result << nl;
    if (result <= ekTk)
        cout << 0 << nl;
    else
    {
        ll baki = given - ekTk;
        ll ans = baki / k + baki % k;
        ll aro = (k - baki % k) % k;
        if (aro <= ekTk)
        {
            ans = min(ans, (baki + aro) / k);
        }
        cout << ans << nl;
    }
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
        // test();
        cs++;
    }
    return 0;
}