/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
bool is_prime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve()
{
    ll A, B;
    cin >> A >> B;
    // A to B
    ll evn = A;
    bool two = false;
    if (A & 1)
    {
        evn = A + 1;
        if (evn == 2)
            two = true;
    }
    if (A != B and !two)
    {
        cout << evn / 2 << " " << evn / 2 << nl;
    }
    else if (A == B)
    {
        cout << (is_prime(A) ? -1 : __gcd(A, B)) << ' ' << (is_prime(A) ? "\n" : n - __gcd(A, B)) << nl;
    }
    else
        cout << -1 << nl;
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