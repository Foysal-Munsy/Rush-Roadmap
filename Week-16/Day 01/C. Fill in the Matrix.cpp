/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/15         *
 *    Time: 22:54:09           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

ll n, m;
ll mex(set<ll> &st)
{
    for (ll i = 0;; i++)
    {
        if (st.find(i) == st.end())
            return i;
    }
}

ll gridMex(vector<vector<ll>> &a)
{
    set<ll> all;
    for (ll i = 0; i < m; i++)
    {
        set<ll> cur;
        for (ll j = 0; j < n; j++)
        {
            cur.insert(a[j][i]);
        }
        all.insert(mex(cur));
    }
    return mex(all);
}

void rightShift(vector<ll> &a, ll x)
{
    deque<ll> b(a.begin(), a.end());
    for (ll i = 0; i < x; i++)
    {
        b.push_front(b.back());
        b.pop_back();
    }
    a = vector<ll>(b.begin(), b.end());
}
void solve()
{
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    vector<ll> permutation;

    for (ll i = 0; i < m; i++)
        permutation.push_back(i);
    for (ll i = 0; i < n; i++)
        a[i] = permutation;
    if (m > 1)
    {
        ll x = 1;
        for (ll i = 0; i < n; i++)
        {
            rightShift(a[i], x);
            if (x == m - 1)
                continue;
            x++;
        }
    }
    cout << gridMex(a) << "\n";
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
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