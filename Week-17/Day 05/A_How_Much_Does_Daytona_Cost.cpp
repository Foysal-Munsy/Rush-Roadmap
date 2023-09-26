/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/26         *
 *    Time: 20:37:28           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n, k;
    // cin >> n >> k;
    // unordered_map<int, int> mp;
    // int count_k = 0;
    // for (int i = 0, x; i < n; i++)
    // {
    //     cin >> x;
    //     mp[x]++;
    //     if (x == k)
    //         count_k++;
    // }
    // bool flag = false;
    // for (auto [i, c] : mp)
    // {
    //     if (c <= count_k)
    //         flag = true;
    // }
    // cout << (flag ? "YES" : "NO") << nl;
    // int n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    bool ok = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == k)
        {
            ok = 1;
        }
    }
    if (ok)
        cout << "YES\n";
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