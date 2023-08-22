/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
typedef long long ll;
#define nl '\n'

const ll MOD = 1e9 + 7;
ll factorial(ll n)
{
    // why recursion doesnot work??? :)
    // if (n <= 2)
    //     return 1;
    // ll ans = (n * factorial(n - 1)) % MOD;
    // return ans % MOD;
    ll value = 1;
    for (ll i = 3; i <= n; i++)
    {
        value *= i;
        value %= MOD;
    }
    return value;
}

void solve()
{
    ll n;
    cin >> n;
    ll N = 2 * n;
    // ll ans = (factorial(N) / 2) % MOD;
    cout << factorial(N) << nl;
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