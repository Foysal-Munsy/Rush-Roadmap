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
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve()
{
    ll x, y;
    cin >> x >> y;

    bool found = false;

    for (ll a = 1; a <= y; a++)
    {
        for (ll b = 1; b <= y; b++)
        {
            if (x <= a + b && a + b <= y && gcd(a + b, a) != 1)
            {
                cout << a << " " << b << nl;
                found = true;
                return;
            }
        }
    }
    if (!found)
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