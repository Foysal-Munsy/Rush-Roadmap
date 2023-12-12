//
// Created by Foysal Munsy on 08 / 12 / 2023
// Time: 20 : 24 : 14
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
int long_sequ(string &str, char ch)
{
    int maxCount = 0, count = 0;
    for (char c : str)
    {
        if (c == ch)
        {
            count++;
            c = '#';
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int temp1 = long_sequ(s, '<');
    int temp2 = long_sequ(s, '>');
    int mx = max(temp1, temp2);
    cout << mx + 1 << '\n';
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
