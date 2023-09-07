/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

int n, a[200005];
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
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int l = 1, r = n;
        while (l < r && a[l] == 1)
            l++;
        while (l < r && a[r] == 1)
            r--;
        if (l == r)
        {
            cout << 1 << " " << 1 << nl;
            continue;
        }
        cout << l << " " << r << nl;
        cs++;
    }
    return 0;
}
