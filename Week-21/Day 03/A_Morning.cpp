/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/22         *
 *    Time: 17:21:45           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    int count = 4;
    vector<int> a;
    for (auto c : s)
    {
        int digit = c - '0';
        if (digit == 0)
            digit = 10;
        a.push_back(digit);
    }
    count += abs(1 - a[0]) + abs(a[0] - a[1]) + abs(a[1] - a[2]) + abs(a[2] - a[3]);

    cout << count << nl;
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