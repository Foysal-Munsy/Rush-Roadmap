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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        a.push_back({val, i});
    }
    sort(a.begin(), a.end());

    ll N = n;

    for (ll i = 0; i < n; i++)
    {
        a[i].first = N;
        N--;
    }
    // for (auto i : a)
    //     cout << i.first << " " << i.second << nl;
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ans[a[i].second] = a[i].first;
    }
    for (auto i : ans)
        cout << i << " ";
    cout << nl;
}
void test()
{
    int n;
    cin >> n;
    priority_queue<pair<int, int>> pq;
    for (int i = 0, x; i < n; i++)
    {
        cin >> x;
        pq.push({x, i});
    }
    int it = 1;
    vector<int> ans(n);
    for (; pq.size();)
    {
        int i = pq.top().second;
        ans[i] = it++;
        pq.pop();
    }
    for (auto i : ans)
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