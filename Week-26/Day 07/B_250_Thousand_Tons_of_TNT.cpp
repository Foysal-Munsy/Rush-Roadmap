//
// Created by Foysal Munsy on 30 / 11 / 2023
// Time: 16 : 16 : 35
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
    long long n, sum = 0;
    cin >> n;
    vector<long long> pref;
    pref.push_back(0);
    for (size_t i = 0; i < n; ++i)
    {
        long long val;
        cin >> val;
        sum += val;
        pref.push_back(sum);
    }
    sum = 0;
    long long mx = 0;
    for (size_t i = 1; i <= n; i++)
    {
        vector<long long> v;
        if (n % i == 0)
        {
            for (size_t j = i; j <= n; j += i)
            {
                sum = pref[j] - pref[j - i];
                v.push_back(sum);
            }
            long long m_x = *max_element(all(v)), m_n = *min_element(all(v));
            mx = max(mx, m_x - m_n);
            v.clear();
        }
    }
    cout << mx << '\n';
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