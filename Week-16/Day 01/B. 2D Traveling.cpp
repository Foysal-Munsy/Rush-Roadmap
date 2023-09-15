/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/15         *
 *    Time: 21:28:03           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

const ll INF = 2e5 + 5;
ll n, k, a, b;
pair<ll, ll> points[INF];
ll distance(pair<ll, ll> A, pair<ll, ll> B)
{
    // abs(X1-X2) + abs (Y1-Y2)
    return abs(A.first - B.first) + abs(A.second - B.second);
}

ll min_distance(pair<ll, ll> A_or_B)
{
    ll ans = 1e18;
    ll major = k;
    for (ll i = 0; i < major; i++)
    {
        ans = min(ans, distance(A_or_B, points[i]));
    }
    return ans;
}
void solve()
{

    cin >> n >> k >> a >> b;
    a--, b--;

    for (ll i = 0, Xi, Yi; i < n; i++)
    {
        cin >> Xi >> Yi;
        points[i].first = Xi;
        points[i].second = Yi;
    }

    ll ans = distance(points[a], points[b]);

    if (k != 0)
    {
        ans = min(ans, min_distance(points[a]) + min_distance(points[b]));
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