/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

// void solve()
// {
//     ll N, D;
//     cin >> N >> D;
//     priority_queue<ll> pq;
//     for (ll i = 0, x; i < N; i++)
//     {
//         cin >> x;
//         pq.push(x);
//     }
//     ll sum = 0, win = 0, mx = -1e9;
//     for (; !pq.empty();)
//     {
//         mx = max(mx, pq.top());
//         pq.pop();
//         sum += mx;
//         if (sum > D)
//         {
//             win++;
//             sum = 0;
//             mx = -1e9;
//         }
//     }
//     cout << win << nl;
// }
void test()
{
    ll N, D;
    cin >> N >> D;
    D++;
    deque<ll> dq;
    for (ll i = 0, x; i < N; i++)
    {
        cin >> x;
        dq.push_back(x);
    }
    sort(dq.begin(), dq.end(), greater<ll>());
    ll win = 0;
    for (; !dq.empty();)
    {
        ll now = dq.front();
        dq.pop_front();
        ll lagbe = (D + now - 1) / now;
        lagbe--;
        if (dq.size() < lagbe)
        {
            break;
        }
        win++;
        for (int i = 0; i < lagbe; i++)
        {
            dq.pop_back();
        }
    }
    cout << win << "\n";
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
        // solve();
        test();
        cs++;
    }
    return 0;
}