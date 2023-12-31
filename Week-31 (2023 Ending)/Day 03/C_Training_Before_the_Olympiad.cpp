//
// Created by Foysal Munsy on 31 / 12 / 2023
// Time: 07 : 48 : 31
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll s = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        s += a[i];
        odd += (a[i] & 1);
        if (i == 0)
            cout << s << " ";
        else
            cout << s - (odd / 3) - (odd % 3 == 1) << " ";
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
/*
    6+6=12
    12/2-=6 [6]=6*2=12
    5+6=11 [11/2]=5.5=5 --> evn and odd = kombe 1 kore
    5+5 =10
    6
    6 3 7 2 5 4
    6
    ans= [6]
    6 3
    9/2= 4*2 =8
    ans = [6,8]
    6 3 7
    10 6 -->olya
    16
    ans = [6,8,16....]
    //
        7 13 11 19 1
        ans = [7];
        7 13 -->m
        ans [7,20]
        7 13 11
        20 11 -->olya
        31-1=30
        ans = [7,20,30]
        7 13 11 19
        m
        20 11 19
        o
        31-1=30
        m
        30 19
        30+19 =48
        ans [7,20,30,48........]
*/