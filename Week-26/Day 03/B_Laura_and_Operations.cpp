//
// Created by Foysal Munsy on 26 / 11 / 2023
// Time: 23 : 23 : 38
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
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr = {a, b, c};
    int odd = 0, evn = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] & 1)
            odd++;
        else
            evn++;
    }
    if (odd == 3 or evn == 3)
    {
        cout << "1 1 1\n";
        return;
    }
    vector<int> track;
    if (odd == 1 and evn == 2)
    {

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] & 1)
                track.push_back(1);
            else
                track.push_back(0);
        }
    }
    else // odd=2 and evn=1
    {
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] & 1)
                track.push_back(0);
            else
                track.push_back(1);
        }
    }
    for (int i : track)
        cout << i << " ";
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