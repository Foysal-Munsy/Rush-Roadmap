/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/05         *
 *    Time: 16:08:49           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;

    // k er joono
    ll k_lagbe = min(ak, m / k); //-> k koyta lagbe?
    ll tk_jomaisi = m - (k_lagbe * k);

    // cout << tk_jomaisi << nl;
    if (tk_jomaisi <= a1)
        cout << "0\n";
    else
    {
        ll ar_koto = tk_jomaisi - a1;
        // k tk lagbe =  ar_koto / k;
        // ek tk lagbe = ar_koto % k;
        ll total = (ar_koto / k) + (ar_koto % k);
        // cout << total << nl;
        ll u = (k - ar_koto % k) % k; // --> eita ekta corner case

        if (u <= a1)
        {
            total = min(total, (ar_koto + u) / k);
        }
        cout << total << nl;
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
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}