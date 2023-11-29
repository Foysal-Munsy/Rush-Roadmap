//
// Created by Foysal Munsy on 25 / 11 / 2023
// Time: 20 : 52 : 26
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
bool isSorted(const vector<int> &vec)
{
    return is_sorted(vec.begin(), vec.end());
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    if (isSorted(a))
    {
        cout << "YES\n";
        return;
    }
    while (true)
    {
        bool is_swapp = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] and a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                is_swapp = true;
            }
        }
        if (!is_swapp)
            break;
    }
    cout << (isSorted(a) ? "YES\n" : "NO\n");
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