/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/26         *
 *    Time: 21:36:00           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 5 * 1e9;
#define nl '\n'
// bool solve(ll n, ll k, ll x, ll sum = 0, ll cnt = 0)
// {
//     n %= mod;
//     k %= mod;
//     x %= mod;
//     if (cnt == k)
//         return sum == x;
//     if (n == 0)
//         return false;
//     return solve(n - 1, k, x, sum + n, cnt + 1) || solve(n - 1, k, x, sum, cnt);
// }

void solve()
{
    ll N, K, X;
    cin >> N >> K >> X;

    ll L = K * (K + 1) / 2;
    ll R = L + (N - K) * K;

    cout << (L <= X and X <= R ? "YES\n" : "NO\n");
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