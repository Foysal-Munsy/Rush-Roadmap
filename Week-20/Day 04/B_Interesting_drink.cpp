/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/16         *
 *    Time: 11:59:24           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
ll binarySearch(vector<ll> &arr, ll target)
{
    ll left = 0, right = arr.size() - 1, ans = 0;
    while (right >= left)
    {
        ll mid = (left + right) / 2;
        if (arr[mid] <= target)
        {
            // ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return left;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll m;
    cin >> m;
    for (ll i = 0, b; i < m; i++)
    {
        cin >> b;
        if (b >= v[n - 1])
        {
            cout << n << nl;
        }
        else if (b < v[0])
        {
            cout << 0 << nl;
        }
        else
        {
            ll x = binarySearch(v, b);
            cout << x << nl;
        }
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
