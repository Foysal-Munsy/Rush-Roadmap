/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    // taken input
    ll N;
    cin >> N;
    vector<vector<pair<ll, ll>>> graph(N);
    for (ll i = 0; i < N; i++)
    {
        ll Si;
        cin >> Si;
        for (ll j = 0; j < Si; j++)
        {
            ll L, W;
            cin >> L >> W;
            graph[i].push_back(make_pair(L, W));
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
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}