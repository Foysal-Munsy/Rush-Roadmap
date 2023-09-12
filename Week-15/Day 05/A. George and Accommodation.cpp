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
    int N;
    cin >> N;
    vector<pair<int, int>> vp(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vp[i].first >> vp[i].second;
        // Pi and Qi
    }
    int move = 0;
    for (auto [P, Q] : vp)
    {
        if (P + 2 <= Q)
            move++;
    }
    cout << move << nl;
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