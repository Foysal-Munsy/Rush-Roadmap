/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/28         *
 *    Time: 21:54:19           *
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
    int k = s.size();
    for (int i = 0; i < k; i++)
    {
        if (s[i] == s[k - i - 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // zero operation
    if (is_good(s))
    {
        cout << 0 << nl;
        return;
    }
    if (n & 1)
    {
        cout << "-1" << nl;
        return;
    }
    // more than zero
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[s.size() - i - 1])
        {
            s.insert((s.size() - i - 1) + 1, "01");
            v.push_back(s.size() - i - 2);
            count++;
        }
        if (count == 300)
            break;
    }
    if (!(is_good(s)) or v.size() > 300)
    {
        cout << "-1" << nl;
    }
    else
    {
        cout << v.size() << nl;
        for (auto i : v)
            cout << i << " ";
        cout << nl;
    }
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