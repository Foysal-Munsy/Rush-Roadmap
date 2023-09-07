/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
string insert(string s, int D)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] - '0' < D)
        {
            return s.substr(0, i) + to_string(D) + s.substr(i);
        }
    }
    return s + to_string(D);
}
void solve()
{
    ll N, D;
    cin >> N >> D;
    string S;
    cin >> S;
    string ans = insert(S, D);
    cout << ans << nl;
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