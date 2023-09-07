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
//     ll N;
//     cin >> N;
//     deque<ll> dq;
//     for (ll i = 0; i < N - 1; i++)
//     {
//         ll x;
//         cin >> x;
//         dq.push_back(x);
//     }
//     if (dq.size() == 1)
//     {
//         dq.push_back(0);
//         for (auto i : dq)
//             cout << i << " ";
//         cout << nl;
//         return;
//     }
//     bool inserted = false;
//     bool pushed = false;
//     bool assigned = false;

//     for (ll i = 1; i < N; i++)
//     {
//         if (dq[i - 1] < dq[i] and dq[0] != 0)
//         {
//             dq.insert(dq.begin() + i, 0);
//             break;
//         }
//         else if (dq[i - 1] == dq[i])
//         {
//             dq.push_back(0);
//             pushed = true;
//             break;
//         }
//         else if (dq[i - 1] > dq[i])
//         {
//             dq[i - 1] = 0;
//             break;
//         }
//     }
//     // for (ll i = 1; i < N; i++)
//     // {
//     //     if (dq[i - 1] > dq[i])
//     //     {
//     //         dq[i - 1] = 0;
//     //         break;
//     //     }
//     // }

//     for (auto i : dq)
//         cout << i << " ";
//     cout << nl;
// }
void test()
{
    ll N;
    cin >> N;
    ll M = N - 1;
    vector<ll> A(N), B(M);

    for (int i = 0; i < N; i++)
        A[i] = -1;

    for (auto &i : B)
        cin >> i;

    A[0] = B[0];
    A[N - 1] = B[M - 1];

    for (int i = 1; i < N - 1; i++)
        A[i] = min(B[i - 1], B[i]);

    for (auto i : A)
        cout << i << " ";
    cout << nl;
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
        // solve();
        test();
        cs++;
    }
    return 0;
}