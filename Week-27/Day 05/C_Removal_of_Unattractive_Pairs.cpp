//
// Created by Foysal Munsy on 05 / 12 / 2023
// Time: 22 : 28 : 39
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

int mn_len(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() != c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.size();
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int a = mn_len(s);
    // debug(st);
    reverse(all(s));
    int b = mn_len(s);
    cout << min(a, b) << nl;
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