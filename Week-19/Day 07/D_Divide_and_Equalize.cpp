/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/12         *
 *    Time: 22:32:21           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll temp = x;
        for (ll j = 2; j * j <= temp; j++)
        {

            while (x % j == 0)
            {
                mp[j]++;
                x /= j;

                // cout<<j<<" ";
            }
        }
        if (x != 1)
        {
            mp[x]++;
        }
        // cout<<endl;
    }
    // cout<<endl;
    bool check = true;

    for (auto i : mp)
    {
        if ((i.second % n) != 0)
        {
            // cout<<i.first<<endl;
            // cout<<i.second<<endl;
            // cout<<n<<endl;
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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