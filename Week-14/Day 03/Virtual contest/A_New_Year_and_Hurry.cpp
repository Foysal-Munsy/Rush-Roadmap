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
    int n, k;
    cin >> n >> k;
    int count = 0;
    int mnt = 0, temp = 240 - k;
    cout << temp << nl;
    for (int i = 1; i <= n; i++)
    {

        mnt += (5 * i);
        // cout << mnt << nl;
    }
    while (temp <= mnt)
    {
        count++;
        temp /= 5;
    }
    cout << count << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1; // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}