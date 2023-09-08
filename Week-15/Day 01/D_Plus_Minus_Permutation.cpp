/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
ll gcd(ll a, ll b)
{
    for (; b;)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}
void solve()
{
    ll N, X, Y;
    cin >> N >> X >> Y;

    ll L = X / gcd(X, Y) * Y;
    ll xc = N / X - N / L;
    ll yc = N / Y - N / L;
    cout << N * xc - xc * (xc - 1) / 2 - yc * (yc + 1) / 2 << "\n";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}