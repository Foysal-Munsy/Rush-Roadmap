//
// Created by Foysal Munsy on 01 / 05 / 2024
// Time: 21 : 25 : 22
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
ll binToDec(string s)
{
    bitset<32> binary(s);
    ll decimal = binary.to_ulong();
    return decimal;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll target = pow(2, k) - 1;
    vector<string> a(n);
    for (auto &i : a)
        cin >> i;
    bool ok = true;

    for (int j = 1; j < target; j++)
    {
        bool found = false;

        for (int i = 1; i < pow(2, n); i++)
        {
            ll orr = 0;

            for (int bit = 0; bit < n; bit++)
            {
                if ((i >> bit) & 1)
                {
                    orr |= binToDec(a[bit]);
                }
            }

            if (orr == j)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
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