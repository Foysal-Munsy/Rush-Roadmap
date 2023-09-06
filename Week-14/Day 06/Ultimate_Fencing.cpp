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
    int N, M;
    cin >> N >> M;
    vector<ll> v;
    for (int i = 0; i < N; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    v.push_back(M);
    // sort(v.begin(), v.end());
    for (auto i : v)
        cout << i << " ";
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