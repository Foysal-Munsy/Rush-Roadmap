//
// Created by Foysal Munsy on 12 / 06 / 2024
// Time: 21 : 14 : 21
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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> dq;
    // R+G = Y
    // R+B = P
    // B+G = C
    for (int i = 0; i < n; i++)
    {
        for (; !dq.empty() && ((dq.back() == 'R' && s[i] == 'G') or (dq.back() == 'G' && s[i] == 'R'));)
        {
            // R+G = Y
            dq.pop_back();
            s[i] = 'Y';
        }
        for (; !dq.empty() && ((dq.back() == 'R' && s[i] == 'B') or (dq.back() == 'B' && s[i] == 'R'));)
        {
            // R+B = P
            dq.pop_back();
            s[i] = 'P';
        }
        for (; !dq.empty() && ((dq.back() == 'B' && s[i] == 'G') or (dq.back() == 'G' && s[i] == 'B'));)
        {
            // B+G = C
            dq.pop_back();
            s[i] = 'C';
        }
        if (!dq.empty() && dq.back() == s[i])
        {
            // same same ignore
            dq.pop_back();
        }
        else
        {
            dq.push_back(s[i]);
        }
    }
    debug(dq);
    HERE;
    for (auto ch : dq)
    {
        cout << ch;
    }
    cout << nl;
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