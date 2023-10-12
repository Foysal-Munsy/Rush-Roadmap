/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/07         *
 *    Time: 23:25:27           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        ans.push_back(abs(a[i - 1] - a[i]));
        // i++;
    }
    int result = *max_element(ans.begin(), ans.end());
    cout << result << nl;
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
        cout << "Case #" << cs << ": ";
        solve();
        cs++;
    }
    return 0;
}