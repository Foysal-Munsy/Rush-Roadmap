/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/21         *
 *    Time: 22:54:46           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), h(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : h)
        cin >> i;

    ll i = 0, j = 0, sum = 0, ans = 0;
    while (j < n)
    {

        if (j == 0 or h[j - 1] % h[j] != 0)
        {
            sum = a[j];
            i = j;
        }
        else if (h[j - 1] % h[j] == 0)
        {
            sum += a[j];
        }

        while (sum > k)
        {
            sum -= a[i];
            i++;
        }

        ans = max(ans, j - i + 1);
        j++;
    }

    cout << ans << nl;
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