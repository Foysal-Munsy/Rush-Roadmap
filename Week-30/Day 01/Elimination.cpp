//
// Created by Foysal Munsy on 22 / 12 / 2023
// Time: 20 : 50 : 25
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
    string s;
    cin >> s;
    ll q;
    cin >> q;
    while (q--)
    {
        ll L, R;
        cin >> L >> R;
        L--;
        R--;
        int cnt = 0;
        deque<int> dq;
        vector<int> a;

        for (int i = L; i <= R; i++)
        {
            dq.push_back(s[i] - '0');
        }

        while (!dq.empty())
        {
            if (dq.size() > 1 && dq[0] == 0 && dq[1] == 1)
            {
                cnt++;
                dq.pop_front();
                dq.pop_front();
            }
            else
            {
                a.push_back(dq.front());
                dq.pop_front();
            }
        }

        for (int i = 0; i < a.size(); i++)
        {
            if (i < a.size() - 1 && a[i] == 0 && a[i + 1] == 1)
            {
                cnt++;
                a[i] = -1;
                a[i + 1] = -1;
            }
        }
        cout << cnt * 2 << '\n';
    }
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