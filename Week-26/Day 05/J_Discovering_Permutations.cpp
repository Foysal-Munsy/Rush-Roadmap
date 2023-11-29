//
// Created by Foysal Munsy on 28 / 11 / 2023
// Time: 09 : 28 : 43
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

string generate_string(int n)
{
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += 'A' + i;
    }
    return ans;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string s = generate_string(n);
    int count = 0;
    do
    {
        cout << s << '\n';
        count++;
    } while (count < k && next_permutation(s.begin(), s.end()));
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << '\n';
        solve();
    }
    return 0;
}