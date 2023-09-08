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
    int L, R;
    cin >> L >> R;
    if (R <= 3)
    {
        cout << "-1\n";
        return;
    }
    if (R % 2 == 0)
    {
        cout << 2 << " " << R - 2 << "\n";
        return;
    }
    if (L < R)
    {
        cout << 2 << " " << R - 3 << "\n";
        return;
    }
    for (int p = 2; p * p <= R; p++)
        if (R % p == 0)
        {
            cout << p << " " << R - p << "\n";
            return;
        }
    cout << "-1\n";
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