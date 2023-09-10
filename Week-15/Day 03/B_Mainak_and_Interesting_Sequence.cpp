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
    int N, M;
    cin >> N >> M;
    if (N > M)
    {
        cout << "No\n";
        return;
    }
    if (N % 2 == 1)
    {
        cout << "Yes\n";
        for (int i = 0; i < N - 1; i++)
            cout << "1 ";
        cout << M - (N - 1) << "\n";
    }
    else
    {
        if (M % 2 == 1)
        {
            cout << "No\n";
            return;
        }
        cout << "Yes\n";
        for (int i = 0; i < N - 2; i++)
            cout << "1 ";
        M -= N - 2;
        cout << M / 2 << " " << M / 2 << "\n";
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