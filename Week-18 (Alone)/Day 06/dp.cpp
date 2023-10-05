/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/04         *
 *    Time: 23:30:44           *
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
    vector<double> a(1e6), f(1e6);
    for (int i = 1; i <= n; i++)
    {
        double p;
        cin >> p;
        a[i] = p * (a[i - 1] + 1);
        f[i] = f[i - 1] + p * (a[i - 1] * 2 + 1);
    }
    cout << fixed << setprecision(15) << f[n] << nl;
    /*
    3
    0.5 0.5 0.5

    Let’s calculate:

    For i = 1, we have p = 0.5. So,
    a[1] = 0.5 * (a[0] + 1) = 0.5
    f[1] = f[0] + 0.5 * (a[0] * 2 + 1) = 0.5

    For i = 2, we have p = 0.5. So,
    a[2] = 0.5 * (a[1] + 1) = 0.75
    f[2] = f[1] + 0.5 * (a[1] * 2 + 1) = 1.25

    For i = 3, we have p = 0.5. So,
    a[3] = 0.5 * (a[2] + 1) = 0.875
    f[3] = f[2] + 0.5 * (a[2] * 2 + 1) = 2.75

    So, the output of this code 2.75.
*/
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