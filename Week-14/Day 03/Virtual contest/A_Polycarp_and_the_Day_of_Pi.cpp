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
    string pi = "314159265358979323846264338327";
    string s;
    cin >> s;
    int count = 0;
    // if (s[0] != '3')
    //     cout << 0 << nl;
    // else
    // {
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == pi[i])
            count++;
        else
            break;
    }
    cout << count << nl;
    // }
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