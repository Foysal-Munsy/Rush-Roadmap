/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

bool is_2020(string s)
{
    int n = s.size();
    if (s.substr(0, 4) == "2020" or s.substr(n - 4, 4) == "2020")
        return true;
    else if (s.substr(0, 3) == "202" and s[n - 1] == '0')
        return true;
    else if (s[0] == '2' and s.substr(n - 3, 3) == "020")
        return true;
    else if (s.substr(0, 2) == "20" && s.substr(n - 2, 2) == "20")
        return true;
    return false;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    cout << (is_2020(s) ? "YES\n" : "NO\n");
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