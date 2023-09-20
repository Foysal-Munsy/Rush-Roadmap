/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/20         *
 *    Time: 22:53:38           *
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
    vector<ll> a(n);
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == i + 1)
        {
            cnt++;
        }
    }
    if (cnt == n)
    {
        cout << "0\n";
        return;
    }

    if (a.front() == 1 or a.back() == n)
    {
        cout << "1\n";
        return;
    }
    if (a.front() == n and a.back() == 1)
    {
        cout << "3\n";
        return;
    }
    cout << "2\n";
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