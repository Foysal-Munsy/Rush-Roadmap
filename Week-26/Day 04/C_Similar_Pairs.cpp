//
// Created by Foysal Munsy on 27 / 11 / 2023
// Time: 23 : 40 : 51
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
bool is_one(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int o = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    sort(a.begin(), a.end());

    if (o == n or e == n or a[0] == a[n - 1] or abs(a[0] - a[n - 1]) == 1 or ((o & 1) == 0 and (e & 1) == 0))
    {
        // yes always
        cout << "YES\n";
    }
    else
    {
        // cout << "-1\n";
        cout << (is_one(a) ? "YES\n" : "NO\n");
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