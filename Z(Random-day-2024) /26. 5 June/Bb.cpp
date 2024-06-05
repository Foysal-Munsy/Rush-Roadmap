//
// Created by Foysal Munsy on 05 / 06 / 2024
// Time: 22 : 51 : 04
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
int maxSumAfterOneModification(vector<int> &A, int N, int K)
{
    int originalSum = 0;
    for (int i = 0; i < N - 1; ++i)
    {
        originalSum += abs(A[i] - A[i + 1]);
    }

    int maxGain = 0;

    for (int i = 0; i < N; ++i)
    {
        int leftDiff = (i > 0) ? abs(A[i] - A[i - 1]) : 0;
        int rightDiff = (i < N - 1) ? abs(A[i] - A[i + 1]) : 0;
        int currentDiff = leftDiff + rightDiff;

        int leftNewDiff1 = (i > 0) ? abs(1 - A[i - 1]) : 0;
        int rightNewDiff1 = (i < N - 1) ? abs(1 - A[i + 1]) : 0;
        int newDiff1 = leftNewDiff1 + rightNewDiff1;
        maxGain = max(maxGain, newDiff1 - currentDiff);

        int leftNewDiffK = (i > 0) ? abs(K - A[i - 1]) : 0;
        int rightNewDiffK = (i < N - 1) ? abs(K - A[i + 1]) : 0;
        int newDiffK = leftNewDiffK + rightNewDiffK;
        maxGain = max(maxGain, newDiffK - currentDiff);
    }

    return originalSum + maxGain;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), reg, ek, bish, track(3);
    for (auto &i : a)
        cin >> i;
    cout << maxSumAfterOneModification(a, n, k) << nl;
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