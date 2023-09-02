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
    // vector<char> odd, evn;
    // for (int i = 0; i < n; i++)
    // {
    //     char c;
    //     cin >> c;
    //     if ((i + 1) & 1)
    //         odd.push_back(c);
    //     else
    //         evn.push_back(c);
    // }
    // sort(evn.begin(), evn.end());
    // sort(odd.begin(), odd.end());
    // for (auto c : evn)
    //     cout << c;
    // cout << nl;
    // for (auto c : odd)
    //     cout << c;
    // cout << nl;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        // odd index
        swap(s[i + 1], s[(i + 1) + 2]);
        // reverse(s[i], s[i + 1]);
    }
    cout << s << nl;
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
        cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}