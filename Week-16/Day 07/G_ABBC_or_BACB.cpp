/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/22         *
 *    Time: 00:26:59           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n;
    string s;
    cin >> s;
    n = s.length();

    ll cnt = 0;
    ll cntb = 0;
    vector<ll> vec;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            cnt++;

            if (cntb != 0)
            {
                vec.push_back(-cntb);
            }
            cntb = 0;
        }
        else
        {
            vec.push_back(cnt);
            cntb++;
            cnt = 0;
        }
    }

    if (cntb != 0)
    {
        vec.push_back(-cntb);
    }
    else if (cnt != 0)
    {
        vec.push_back(cnt);
    }

    ll m = vec.size();

    if (vec[0] < 0)
    {
        vec[0] = -1;
    }

    if (vec[m - 1] < 0)
    {
        vec[m - 1] = -1;
    }

    ll ans = 0;

    bool check = false;
    ll mn = INT_MAX;
    for (ll i = 0; i < m; i++)
    {
        if (vec[i] > 0)
        {
            mn = min(mn, vec[i]);
            ans += vec[i];
        }

        if (vec[i] <= -2)
        {
            check = true;
        }
    }

    if (check)
    {
        cout << ans << nl;
        return;
    }

    ll temp = min(vec[0], vec[m - 1]);
    mn = min(mn, temp);

    if (mn >= 0)
    {
        ans -= mn;
    }

    cout << ans << nl;
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