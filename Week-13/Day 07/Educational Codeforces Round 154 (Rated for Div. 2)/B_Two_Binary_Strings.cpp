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
    string a, b;
    cin >> a >> b;
    int n = a.size();
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i - 1] == '0' and a[i] == '1')
        {
            if (b[i - 1] == '0' and b[i] == '1')
                flag = true;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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
/*
01110001
01110001
*/