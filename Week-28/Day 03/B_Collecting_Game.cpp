//
// Created by Foysal Munsy on 10 / 12 / 2023
// Time: 08 : 14 : 06
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const long long N = 2e5 + 5;

void solve()
{
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a(n);
    // taken input
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));
    vector<long long> pref;
    long long sum = 0;
    // prefix sum
    for (long long i = 0; i < n; i++)
    {
        sum += a[i].first;
        pref.push_back(sum);
    }
    // track-->given vector
    vector<long long> track(n);
    for (long long i = 0; i < n; i++)
    {
        track[i] = a[i].first;
    }
    vector<long long> ans(n);
    long long i = 0, j = 1;
    // two pointer --> added more sum to prefix
    debug(pref, track);
    HERE;
    while (i < n and j < n)
    {
        if (pref[i] >= track[j])
        {
            pref[i] += track[j];
            j++;
        }
        else
        {
            i++;
            j = i + 1;
        }
    }

    debug(pref, track);
    HERE;
    // binary search for count
    for (long long i = 0; i < n; i++)
    {
        long long count = 0;
        auto it = upper_bound(all(track), pref[i]);
        if (it != track.end())
        {
            count = it - track.begin();
        }
        else
        {
            count = track.size();
        }
        ans[i] = max(0LL, count - 1);
    }

    // save the result to the given order
    vector<long long> res(n);
    for (long long i = 0; i < n; i++)
    {
        res[a[i].second] = ans[i];
    }

    // print result
    for (long long i = 0; i < n; i++)
    {

        cout << res[i] << " ";
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