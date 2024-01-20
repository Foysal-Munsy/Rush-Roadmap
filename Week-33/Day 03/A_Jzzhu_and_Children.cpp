//
// Created by Foysal Munsy on 14 / 01 / 2024
// Time: 12 : 50 : 27
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
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        q.push({a, i});
    }
    int lastChild = 0;
    for (; !q.empty();)
    {
        pair<int, int> child = q.front();
        q.pop();
        if (child.first > m)
        {
            child.first -= m;
            q.push(child);
        }
        lastChild = child.second;
    }
    cout << lastChild << '\n';
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    solve();
    return 0;
}