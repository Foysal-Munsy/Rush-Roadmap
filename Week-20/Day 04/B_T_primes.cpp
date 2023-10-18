/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/16         *
 *    Time: 13:34:37           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
const ll mod = 1e9 + 3;
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        ll half = sqrtl(x);
        bool is_perfectHalf = false;
        if (half * half == x)
            is_perfectHalf = true;
        cout << (isPrime(half) and is_perfectHalf ? "YES" : "NO") << nl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}