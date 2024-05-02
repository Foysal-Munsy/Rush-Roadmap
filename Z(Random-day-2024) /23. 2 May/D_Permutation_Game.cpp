//
// Created by Foysal Munsy on 02 / 05 / 2024
// Time: 22 : 31 : 41
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
const int N = 1e9;

void solve()
{
    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    --pb, --ps;
    vector<ll> a(n), p(n), b, s;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        --p[i];
    }
    for (auto &i : a)
        cin >> i;
    vector<bool> vb(n), vs(n);
    while (!vb[pb])
    {
        b.emplace_back(a[pb]);
        vb[pb] = 1;
        pb = p[pb];
    }
    while (!vs[ps])
    {
        s.emplace_back(a[ps]);
        vs[ps] = 1;
        ps = p[ps];
    }
    ll sb = 0, sc = 0, csb = 0, csc = 0;
    for (int i = 0; i < b.size() && i < k; i++)
    {
        sb = max(sb, csb + b[i] * (k - i));
        csb += b[i];
    }
    for (int i = 0; i < a.size() && i < k; i++)
    {
        //
        sc = max(sc, csc + s[i] * (k - i));
        csc += s[i];
    }
    if (sb > sc)
    {
        cout << "Bodya\n";
    }
    else if (sb < sc)
    {
        cout << "Sasha\n";
    }
    else
    {
        cout << "Draw\n";
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