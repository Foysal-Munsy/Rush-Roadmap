/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/21         *
 *    Time: 22:26:16           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;

bool check(ll mid, vector<ll> &V, ll x)
{
    ll water_needed = 0;
    for (ll i = 0; i < V.size(); i++)
    {
        if (V[i] < mid)
        {
            water_needed += mid - V[i];
        }
    }
    return water_needed <= x;
}

ll maxTankHeight(vector<ll> &V, ll x)
{
    ll left = 1, right = 1e9 + 1e9;
    while (left < right)
    {
        ll mid = (left + right + 1) / 2;
        if (check(mid, V, x))
        {
            left = mid;
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
    ll n, x;
    cin >> n >> x;
    vector<ll> V(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> V[i];
    }
    cout << maxTankHeight(V, x) << nl;
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