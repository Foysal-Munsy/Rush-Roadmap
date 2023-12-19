//
// Created by Foysal Munsy on 16 / 12 / 2023
// Time: 22 : 28 : 45
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

void solve()
{
    ll n;
    cin >> n;
    string s, t, t2;
    cin >> s;
    t = s;
    sort(all(t));
    if (s == t)
    {
        cout << 0 << '\n';
        return;
    }
    char c = s[0];
    stack<pair<char, ll>> st;
    st.push({s[0], 0});
    for (int i = 1; i < n; i++)
    {
        while (st.size() && st.top().first < s[i])
            st.pop();
        st.push({s[i], i});
    }
    vector<ll> v;
    while (st.size())
    {
        v.push_back(st.top().second);
        t2 += s[st.top().second];
        st.pop();
    }
    reverse(all(v));
    ll j = 0, sz = v.size();
    char maxi = t[n - 1];
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