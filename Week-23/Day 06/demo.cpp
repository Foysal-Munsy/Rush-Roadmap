//
// Created by Foysal Munsy on 08 / 11 / 2023
// Time: 21 : 32 : 22
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
    vector<int> a = {1, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 17, 16, 19, 18, 20};
    int n = a.size();
    bool isValid = true;
    for (int i = 2; i < a.size(); i++)
    {
        if (a[i] == (a[i - 1] | a[i - 2]))
        {
            isValid = false;
            break;
        }
    }

    if (isValid)
    {
        cout << "The sequence is valid." << endl;
    }
    else
    {
        cout << "The sequence is not valid." << endl;
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
    // cin>>t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}