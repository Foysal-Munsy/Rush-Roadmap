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
    ll N, D;
    cin >> N >> D;
    deque<ll> dq;
    for (ll i = 0, X; i < N; i++)
    {
        cin >> X;
        dq.push_back(X);
    }
    sort(dq.begin(), dq.end(), greater<ll>());
    // 100 90 80 70 60 50
    // 100 90 80 70 60
    ll win = 0, sum = 0, pop_korbo = 0;
    for (; !dq.empty();)
    {

        ll now = dq.front();
        sum += now;
        if (sum > D)
        {
            win++;
            sum = 0;
            dq.pop_front();
        }
        else
            dq.pop_back();

        // for (auto &it : dq)
        //     cout << it << " ";
        // cout << nl;
    }
    cout << win << nl;
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