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
    vector<int> a, b;
    int ans = 0, mx = 0;
    for (; n--;)
    {
        int exit, enter;
        cin >> exit >> enter;
        // int ache = abs(exit-enter);//3
        // a.push_back(exit);
        // b.push_back(enter);
        ans -= exit;
        ans += enter;
        mx = max(mx, ans);
    }
    cout << mx << nl;
    // int mx = *max_element(a.begin(), a.end());
    // int mn = *min_element(b.begin(), b.end());
    // cout << mx + mn << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1; // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}