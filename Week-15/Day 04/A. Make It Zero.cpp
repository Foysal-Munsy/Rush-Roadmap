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
    int N;
    cin >> N;
    vector<int> V(N);
    for (auto &i : V)
        cin >> i;

    // N jodi odd hoy
    if (N & 1)
    {
        /*
        1 1->0 9 9 0 1 8
        0 9-> 9 9 0 1 8
        9 9-> 0 9 0 1 8
        0 9->9 0 1 8
        9 0->9 1 8
        9 1-> 8 8
        8 8 ->0
        */
        cout << 4 << nl;
        cout << 1 << " " << 2 << nl;
        cout << 1 << " " << 2 << nl;
        cout << 2 << " " << N << nl;
        cout << 2 << " " << N << nl;
    }
    else
    {
        cout << 2 << nl;
        cout << 1 << " " << 2 << nl;
        cout << 2 << " " << N << nl;
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