
/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/08         *
 *    Time: 21:52:20           *
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

    ll bits[n][33];

    // just filppinig the bits representaion for the given array elements
    for (ll i = 0, b; i < n; i++)
    {
        cin >> b;
        for (ll j = 32; j >= 0; j--)
        {
            if ((b & (1LL << j)) == 0) // if 0 then set it 1
                bits[i][j] = 1;
            else // if 1 then set it 0
                bits[i][j] = 0;
        }
    }

    // prefix sum for every bits
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 32; j >= 0; j--)
        {
            bits[i][j] += bits[i - 1][j];
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll low, k;
        cin >> low >> k;
        low--; // for 0 based index
        ll l = low;
        ll mid, r = n - 1, ans = -1;
        while (l <= r)
        {
            ll num = 0;
            mid = l + (r - l) / 2;
            for (ll i = 32; i >= 0; i--)
            {
                ll setBits = bits[mid][i] - (low == 0 ? 0 : bits[low - 1][i]);
                if (!setBits)
                    num += (1LL << i);
            }
            if (num >= k)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << (ans == -1 ? -1 : ans + 1) << " ";
    }
    cout << nl;
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