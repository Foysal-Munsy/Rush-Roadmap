//
// Created by Foysal Munsy on 21 / 12 / 2023
// Time: 11 : 07 : 53
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
    int n;
    cin >> n;
    vector<int> a, ans(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(all(a));
    debug(a);
    if (n % 2 == 0)
    {
        int k = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            ans[k] = a[n - 1 - i];
            debug(k, i, ans[k], a[n - 1 - i]);
            k--;
            ans[k] = a[i];
            debug(k, i, ans[k], a[i]);
            k--;
        }
    }
    else
    {
        int k = n - 1;
        ans[0] = a[n / 2];
        for (int i = 0; i < n / 2; i++)
        {
            ans[k] = a[n - 1 - i];
            k--;
            ans[k] = a[i];
            k--;
        }
    }

    for (auto &i : ans)
    {

        cout << i << " ";
    }
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