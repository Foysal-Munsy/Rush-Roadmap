/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

/*
2, 3, 5, 7, 11, 13, 17, 19, 23, 29
31, 37, 41, 43, 47, 53, 59, 61, 67, 71
73, 79, 83, 89, 97
*/
void solve()
{
    string s;
    cin >> s;
    if (s[0] == '1')
        cout << 17 << nl;
    if (s[0] == '2')
        cout << 23 << nl;
    if (s[0] == '3')
        cout << 31 << nl;
    if (s[0] == '4')
        cout << 41 << nl;
    if (s[0] == '5')
        cout << 53 << nl;
    if (s[0] == '6')
        cout << 61 << nl;
    if (s[0] == '7')
        cout << 71 << nl;
    if (s[0] == '8')
        cout << 83 << nl;
    if (s[0] == '9')
        cout << 97 << nl;
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