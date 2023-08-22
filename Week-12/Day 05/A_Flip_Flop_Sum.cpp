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
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (auto &i : v)
    {
        cin >> i;
        sum += i;
    }

    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1] && v[i] > 0) // 1
        {
            ans = max(ans, sum - 4);
        }
        else if (v[i] == v[i + 1] && v[i] < 0) //-1
        {
            ans = max(ans, sum + 4);
        }
        else
            ans = max(ans, sum);
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
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}