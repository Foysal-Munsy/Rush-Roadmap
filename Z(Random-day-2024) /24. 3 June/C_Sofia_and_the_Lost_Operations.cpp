//
// Created by Foysal Munsy on 03 / 06 / 2024
// Time: 21 : 56 : 28
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
    ll n, m;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    // c??
    cin >> m;
    vector<ll> d(m);
    for (auto &i : d)
        cin >> i;
    // modification ---> d
    unordered_set<ll> dd(all(d));

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (dd.find(b[i]) == dd.end())
        {
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO\n";
        return;
    }
    unordered_map<ll, ll> mp;
    for (auto i : d)
        mp[i]++;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (mp[b[i]] > 0)
                mp[b[i]]--;
            else
            {
                ok = false;
                break;
            }
        }
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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