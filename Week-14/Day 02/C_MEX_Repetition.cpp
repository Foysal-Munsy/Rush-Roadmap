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
    ll n, k;
    cin >> n >> k;
    // jehetu eita ekta circular problem so n+1 tomo por por same ans ashbe
    // so k er value ke n+1 diye mod korle O(n) e solution hoye jabe
    int repeat = k % (n + 1);

    deque<ll> dq;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
        visited[dq[i]] = true;
    }
    int mex = -1;
    for (int i = 0; i <= n; i++)
    {
        if (!visited[i])
            mex = i;
    }

    for (; repeat--;)
    {
        int save_mex = mex; // mex bar bar update hobe,so save kora lagbe
        dq.push_front(save_mex);
        // updated mex = dq.back()
        mex = dq.back();
        dq.pop_back();
    }
    for (auto i : dq)
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
        solve();
        cs++;
    }
    return 0;
}