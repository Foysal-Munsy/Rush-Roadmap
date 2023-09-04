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
    ll n;
    cin >> n;
    multiset<ll> ms;
    for (; n--;)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }
    // for (auto i : ms)
    //     cout << i << " ";
    // cout << nl;
    ll count = 0;
    for (; !ms.empty();)
    {
        ll ekhon = *ms.begin();
        for (; 1;)
        {
            auto porerta = ms.find(ekhon + 1);
            if (porerta != ms.end())
            {
                ekhon++;
                ms.erase(porerta);
            }
            else
            {
                ms.erase(ms.begin());
                count++;
                break;
            }
        }
    }
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