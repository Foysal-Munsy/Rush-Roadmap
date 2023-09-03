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
    ll N, M, K;
    cin >> N >> M >> K;
    vector<vector<ll>> A(N, vector<ll>(M));
    for (ll i = 0; i < N; i++)
    {
        for (ll j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    ll ans = 0;
    for (ll p = 0; p < M - K + 1; p++)
    {
        priority_queue<pair<ll, pair<ll, ll>>> pq;
        for (ll i = 0; i < N; i++)
        {
            for (ll j = p; j < p + K; j++)
            {
                pq.push({A[i][j], {i, j}});
            }
        }
        ans += pq.top().first;
        ll max_i = pq.top().second.first;
        ll max_j = pq.top().second.second;
        A[max_i][max_j] = 0;
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
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();

        cs++;
    }
    return 0;
}