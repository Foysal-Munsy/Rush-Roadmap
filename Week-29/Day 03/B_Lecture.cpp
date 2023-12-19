//
// Created by Foysal Munsy on 17 / 12 / 2023
// Time: 16 : 03 : 18
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
    int n, m;
    cin >> n >> m;
    vector<string> input;
    map<string, string> track;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.size() <= b.size())
            track[a] = a;
        else
            track[a] = b;
    }
    debug(track);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        input.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        cout << track[input[i]] << " ";
    }
    cout << '\n';
    input.clear();
    track.clear();
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