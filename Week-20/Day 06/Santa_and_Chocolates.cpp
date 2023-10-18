/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/18         *
 *    Time: 21:29:52           *
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
    ll sum = 0, resum = 0;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    if (sum < n)
    {
        cout << "NO\n";
        return;
    }
    resum = sum;
    sum /= n;
    for (ll i = 0; i < n; i++)
    {
        v[i] = sum;
    }
    resum %= n;
    for (ll i = 0; i < resum; i++)
    {
        v[i]++;
    }
    ll mx = *max_element(v.begin(), v.end());
    ll mn = *min_element(v.begin(), v.end());
    if (mx - mn > k)
        cout << "NO\n";
    else
        cout << "YES\n";
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