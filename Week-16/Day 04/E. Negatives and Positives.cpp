/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/18         *
 *    Time: 10:02:11           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll N;
    cin >> N;
    vector<ll> v;
    ll minus = 0, sum = 0;
    for (ll i = 0, x; i < N; i++)
    {
        cin >> x;
        v.push_back(abs(x));
        if (x < 0)
            minus++;
        sum += abs(x);
    }
    ll choto = *min_element(v.begin(), v.end());
    cout << ((minus & 1) ? (sum - choto) - choto : sum) << '\n';
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