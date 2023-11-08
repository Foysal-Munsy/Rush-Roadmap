//
// Created by Foysal Munsy on 04 / 11 / 2023
// Time: 21 : 50 : 24
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
// const int N = 2e5 + 5;

int N;
int A[200];
void solve()
{
    cin >> N;
    for (int i = 0; i < 2 * N; i++)
        cin >> A[i];

    sort(A, A + 2 * N);

    cout << A[N - 1] - A[0] + A[2 * N - 1] - A[N] << "\n";

    for (int i = 0; i < N; i++)
        cout << A[i] << " " << A[N + i] << "\n";
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