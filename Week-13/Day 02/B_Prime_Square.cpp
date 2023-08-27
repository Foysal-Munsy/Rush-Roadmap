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
    vector<vector<ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        a[i].resize(n, 0);
    }

    for (int i = 0; i < n; ++i)
    {
        a[i][i] = 1;         // right diagonal
        a[i][n - i - 1] = 1; // left diagonal
    }

    if (n % 2 == 1)
    {
        a[n / 2 - 1][n / 2] = 1;
        a[n / 2][n / 2 + 1] = 1;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j];
            if (j < n - 1)
                cout << " ";
            else
                cout << "\n";
        }
    }
    //     for (ll i = 0; i < n; i++)
    //     {
    //         for (ll j = 0; j < n; j++)
    //         {
    //             cout << a[i][j] << " ";
    //         }
    //         cout << '\n';
    //     }
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