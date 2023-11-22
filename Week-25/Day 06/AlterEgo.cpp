//
// Created by Foysal Munsy on 22 / 11 / 2023
// Time: 21 : 07 : 53
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

void solve()
{
    long long N;
    cin >> N;
    vector<long long> A(N), B(N);
    for (auto &i : B)
        cin >> i;

    sort(B.begin(), B.end());
    for (int i = 0; i < N / 2; i++)
    {
        A[i] = B[i];
        A[i + N / 2] = B[i + N / 2] - A[i];
        if (A[i + N / 2] < 0)
        {
            cout << -1 << '\n';
            return;
        }
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
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