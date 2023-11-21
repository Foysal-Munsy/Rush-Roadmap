//
// Created by Foysal Munsy on 21 / 11 / 2023
// Time: 23 : 32 : 35
//
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    vector<int> distinct(n);
    unordered_set<int> st;
    for (int i = n - 1; i >= 0; --i)
    {
        st.insert(a[i]);
        debug(st);
        distinct[i] = st.size();
    }

    for (; m--;)
    {
        int li;
        cin >> li;
        --li;
        cout << distinct[li] << '\n';
    }
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}