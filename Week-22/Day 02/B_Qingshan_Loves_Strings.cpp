/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/28         *
 *    Time: 21:12:21           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

bool is_good(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    string result = "";
    // zero times
    if (is_good(s))
    {
        cout << "Yes\n";
        return;
    }

    // more than zero
    for (int i = 0; i < n; i++)
    {
        result += s[i];
        if (s[i] == s[i + 1])
        {
            // result += ;
            result += t;
        }
    }
    if (is_good(result))
        cout << "Yes\n";
    else
        cout << "No\n";
    // cout << result << nl;
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
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