//
// Created by Foysal Munsy on 14 / 11 / 2023
// Time: 22 : 11 : 30
//
#include <bits/stdc++.h>
using namespace std;
long long t, n, l, r, m, a[1000005];
void solve()
{
    a[0] = 0;
    for (long long i = 1; i <= 100000; i++)
        a[i] = a[i - 1] + 3 * i - 1;

    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = 0;
        while (n >= 2)
        {
            l = 1;
            r = 100000;
            while (l < r)
            {
                m = (l + r + 1) / 2;
                if (a[m] <= n)
                    l = m;
                else
                    r = m - 1;
            }
            n -= a[l];
            ans++;
        }
        cout << ans << "\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}