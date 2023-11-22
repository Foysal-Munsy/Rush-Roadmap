//
// Created by Foysal Munsy on 22 / 11 / 2023
// Time: 21 : 46 : 09
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
bool isSorted(const vector<long long> &vec)
{
    return is_sorted(vec.begin(), vec.end());
}
void solve()
{
    // 1 line
    long long n;
    cin >> n;
    vector<long long> a(n), clr_a(n), b(n), clr_b(n);
    // 4 lines
    for (auto &i : a)
        cin >> i;
    for (auto &i : clr_a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    for (auto &i : clr_b)
        cin >> i;

    if (isSorted(a))
    {
        cout << "Yes\n";
        return;
    }
    unordered_map<int, int> map;
    vector<pair<int, int>> equal_elements;

    for (int i = 0; i < n; i++)
    {
        map[clr_a[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        if (map.find(clr_b[i]) != map.end())
        {
            equal_elements.push_back(make_pair(map[clr_b[i]], i));
        }
    }
    for (auto [i, j] : equal_elements)
    {
        swap(a[i], b[j]);
    }

    cout << (isSorted(a) ? "Yes\n" : "No\n");
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