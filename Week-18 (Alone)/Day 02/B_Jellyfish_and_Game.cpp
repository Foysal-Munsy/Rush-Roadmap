/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/30         *
 *    Time: 22:25:36           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m), jelly, gelly;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    jelly = a;
    gelly = b;
    sort(jelly.rbegin(), jelly.rend());
    sort(gelly.rbegin(), gelly.rend());

    for (ll i = 0; i < k; i++)
    {
        if ((i + 1) % 2 == 1)
        {
            if (a[i] < gelly[i])
            {
                swap(a[i], gelly[i]);
                // swap(gelly[i], a[i]);
            }
        }
        if ((i + 1) % 2 == 0)
        {
            if (b[i] < a[i])
                swap(b[i], jelly[i]);
        }
    }
    ll sum = 0;
    for (auto i : a)
        sum += i;
    // ll asum = 0;
    // for (auto i : b)
    //     asum += i;
    // cout << sum << " " << asum << nl;
    cout << sum << nl;
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