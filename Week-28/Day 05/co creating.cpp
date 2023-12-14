//
// Created by Foysal Munsy on 12 / 12 / 2023
// Time: 20 : 25 : 42
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

bool isPrime(ll num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (ll i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

vector<ll> generatePrimes(ll n)
{
    vector<ll> primes;
    for (ll i = 2; primes.size() < n; ++i)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    return primes;
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> prime(n), ans;
    prime = generatePrimes(n);
    deque<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    int j = 0, cnt = 0;
    for (; q--;)
    {

        for (int i = n - 1; i >= 0; --i)
        {
            if (a[i] % prime[j] == 0 and a[i] != -1)
            {
                b.push_back(a[i]);
                a[i] = -1;
                cnt++;
            }
            else
                continue;
        }
        if (!(cnt & 1) and !b.empty())
        {
            while (!b.empty())
            {
                ans.push_back(b.back());
                b.pop_back();
            }
        }
        else if ((cnt & 1) and !b.empty())
        {
            while (!b.empty())
            {
                ans.push_back(b.front());
                b.pop_front();
            }
        }
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
            ans.push_back(a[i]);
    }

    debug(ans);
    for (auto &i : ans)
        cout << i << '\n';
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