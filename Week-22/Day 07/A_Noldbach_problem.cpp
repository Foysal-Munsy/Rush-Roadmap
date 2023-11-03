// Created by Foysal Munsy on 02 / 11 / 2023
// Time: 12 : 00 : 41

// this problem is solved by following sieve algorithm and sliding window technique
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

vector<int> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<int> prime;
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return prime;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> primes = sieve(n);
    vector<int> track;
    // sliding window technique
    int sum = 0;
    for (int i = 0; i < 2; ++i)
    {
        sum += primes[i];
    }
    track.push_back(sum);
    for (int i = 2; i < primes.size(); ++i)
    {
        sum += (primes[i] - primes[i - 2]);
        track.push_back(sum);
    }
    for (int i = 0; i < track.size(); ++i)
        track[i] += 1;

    unordered_set<int> set_a(primes.begin(), primes.end());
    int count = 0;
    for (int num : track)
    {
        if (set_a.count(num))
        {
            ++count;
        }
    }
    cout << (count >= k ? "YES\n" : "NO\n");
    debug(primes, track, count);
}

signed main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}