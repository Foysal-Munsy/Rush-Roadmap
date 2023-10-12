/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/08         *
 *    Time: 13:20:26           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (auto &i : a)
        cout << i << " ";
    cout << nl;
    int l = 0, r = n - 1, mid;
    bool found = false;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            cout << mid + 1 << nl;
            found = true;
            break;
        }
        if (a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (!found)
        cout << -1 << nl;
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