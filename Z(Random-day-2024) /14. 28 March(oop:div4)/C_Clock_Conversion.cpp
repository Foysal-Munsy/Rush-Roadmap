//
// Created by Foysal Munsy on 28 / 03 / 2024
// Time: 21 : 23 : 00
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

    string s;
    cin >> s;
    string first_two = s.substr(0, 2), second_two = s.substr(3, 5);
    int hh = stoi(first_two), mm = stoi(second_two);

    if (hh == 0)
    {
        // moddho rat 00:00
        cout << "12" << s.substr(2) << " AM\n";
    }
    else if (hh == 12)
    {
        // dupur (12:00)
        cout << s << " PM\n";
    }
    else if (hh < 12)
    {
        // sokal
        cout << s << " AM\n";
    }
    else
    {
        // PM
        int new_hh = hh - 12;
        string st = to_string(new_hh);
        if (st.size() == 1)
            cout << "0" << st;
        else
            cout << st;
        cout << s.substr(2) << " PM\n";
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
