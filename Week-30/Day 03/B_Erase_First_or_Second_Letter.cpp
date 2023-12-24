//
// Created by Foysal Munsy on 24 / 12 / 2023
// Time: 21 : 00 : 14
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;
int distinctSubstring(string str)
{
    set<string> result;
    for (int i = 0; i <= str.length(); i++)
    {
        for (int j = 1; j <= str.length() - i; j++)
        {
            result.insert(str.substr(i, j));
        }
    }
    return result.size();
}
void solve()
{
    ll n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    debug(distinctSubstring(s));
    unordered_set<char> st;
    for (auto &ch : s)
    {
        st.insert(ch);
        debug(st);
        ll distinct = st.size();
        cnt += distinct;
        debug(cnt);
    }
    cout << cnt << '\n';
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