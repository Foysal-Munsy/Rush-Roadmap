//
// Created by Foysal Munsy on 12 / 11 / 2023
// Time: 18 : 12 : 28
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

int binary_search(vector<int> &a, int n, int mx)
{
    int low = 0, high = n - 1, count = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] < mx)
        {
            count += mx - a[mid];
            a[mid] = mx;
            low = mid + 1;
        }
        else if (a[mid] > mx)
        {
            count += a[mid] - mx;
            a[mid] = mx;
            high = mid - 1;
        }
        else
            break;
    }
    return count;
}

void solve()
{
    int n, m, mx;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());
    mx = *max_element(a.begin(), a.end());

    bool flag = true;
    for (auto &i : b)
    {
        cin >> i;
        if (mx < i)
            flag = false;
    }
    if (flag)
    {
        cout << 0 << nl;
        return;
    }
    if (n == 1 and m == 1)
    {
        cout << abs(a[0] - b[0]) << nl;
        return;
    }
    sort(b.begin(), b.end());
    int count = 0;
    if (m == 2)
    {
        count += abs(b[0] - mx);
        count += abs(b[1] - mx);
    }
    if (n == 2)
    {
        count += abs(a[0] - mx);
        count += abs(a[1] - mx);
    }
    int ans = 0;
    if (n > 2 and m > 2)
    {
        ans = binary_search(a, n, mx);
        ans += binary_search(b, m, mx);
    }
    else if (n == 2 and m > 2)
    {
        ans = binary_search(b, m, mx);
        ans += count;
    }
    else if (n > 2 and m == 2)
    {
        ans = binary_search(a, n, mx);
        ans += count;
    }
    else
    {
        ans = count;
    }
    // cout << ans << nl;
    int ab = binary_search(a, n, mx);
    cout << ab << nl;
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