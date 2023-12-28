// recap...
// Created by Foysal Munsy on 27 / 12 / 2023
// Time: 09 : 26 : 49
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
vector<pair<string, string>> generate_pairs(string s)
{
    vector<pair<string, string>> vp;
    for (int i = 1; i < s.size(); i++)
    {
        string x = s.substr(0, i);
        string y = s.substr(i);
        vp.push_back({x, y});
    }
    return vp;
}

void solve()
{
    int n;
    cin >> n;
    vector<string> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        s.push_back(st);
        mp[st] = 0;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        vector<pair<string, string>> pairs = generate_pairs(i->first);
        for (auto j = pairs.begin(); j != pairs.end(); j++)
        {
            if (mp.count(j->first) && mp.count(j->second))
            {
                mp[i->first] = 1;
                break;
            }
        }
    }
    for (auto &i : s)
    {
        cout << mp[i];
    }
    cout << '\n';
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