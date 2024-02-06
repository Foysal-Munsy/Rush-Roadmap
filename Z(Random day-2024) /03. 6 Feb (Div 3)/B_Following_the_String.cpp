//
// Created by Foysal Munsy on 06 / 02 / 2024
// Time: 21 : 11 : 01
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
    ll n;
    cin >> n;
    vector<ll> a(n), freq(26, -1);
    string s;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        for (char c = 'z'; c >= 'a'; c--)
        {
            if (freq[c - 'a'] == a[i] - 1)
            {
                freq[c - 'a']++;
                s += c;
                break;
            }
        }
    }
    cout << s << nl;
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