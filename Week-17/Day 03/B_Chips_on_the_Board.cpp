/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/24         *
 *    Time: 21:33:25           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll A = *min_element(b.begin(), b.end());
    ll B = *min_element(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        a[i] += A;
        b[i] += B;
    }
    ll sumA = 0, sumB = 0;
    for (ll i = 0; i < n; i++)
    {
        sumA += a[i];
        sumB += b[i];
    }
    cout << min(sumA, sumB) << nl;
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