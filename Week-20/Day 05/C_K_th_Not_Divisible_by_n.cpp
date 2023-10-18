/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/17         *
 *    Time: 19:36:11           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
ll kth_no_divisible(ll n, ll k)
{
    ll low = 1, high = INT_MAX;
    ll ans = 0;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        ll sol = mid - mid / n;
        if (sol > k)
        {
            high = mid - 1;
        }
        else if (sol < k)
        {
            low = mid + 1;
        }
        else
        {
            ans = mid;
            high = mid - 1;
        }
    }
    return ans;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll res = kth_no_divisible(n, k);
    cout << res << nl;
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