/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/12         *
 *    Time: 21:34:07           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    vector<ll> a;
    for (int i = 0; i < 3; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    if (a[0] == a[1] and a[1] == a[2])
    {
        cout << "YES\n";
        return;
    }
    int i = 0;
    for (; i < 3;)
    {
        if (a[0] != a[1])
        {
            ll aa = abs(a[0] - a[1]);
            a[1] = aa;
        }
        else if (a[0] == a[1] and a[0] != a[2])
        {
            ll bb = abs(a[0] - a[2]);
            a[2] = bb;
        }
        i++;
    }
    // for (auto i : a)
    //     cout << i << " ";
    // cout << nl;
    if (a[0] == a[1] and a[1] == a[2])
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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