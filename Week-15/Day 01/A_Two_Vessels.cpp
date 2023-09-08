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
    vector<int> a(3);
    for (auto &i : a)
        cin >> i;

    int max_val = max(a[0], a[1]);
    int min_val = min(a[0], a[1]);

    int moves = 0;
    for (; max_val > min_val;)
    {
        max_val -= a[2];
        min_val += a[2];
        moves++;
    }
    cout << moves << nl;
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