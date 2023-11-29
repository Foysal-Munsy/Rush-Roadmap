//
// Created by Foysal Munsy on 29 / 11 / 2023
// Time: 00 : 14 : 31
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

vector<long long> min_operation(queue<long long> &q)
{
    //
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}
void solve()
{
    long long n;
    cin >> n;
    queue<long long> q;
    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
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