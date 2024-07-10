//
// Created by Foysal Munsy on 10 / 07 / 2024
// Time: 17 : 37 : 59
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#ifdef LOpieceAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

map<ll, ll> find_subarray(vector<ll> &x, ll piece)
{
    ll n = x.size();
    map<ll, ll> ans;
    int i = 0, j = 0, sum = 0;

    while (j < n)
    {
        sum += x[j];
        if (sum >= piece)
        {
            while (sum >= piece && i <= j)
            {
                ans[i] = j;
                sum -= x[i];
                i++;
            }
            j++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}
void findIndices(map<ll, ll> &alice, map<ll, ll> &bob, map<ll, ll> &charlie)
{
    for (const auto &[x, y] : alice)
    {
        auto f1 = bob.upper_bound(y);
        if (f1 != bob.end())
        {
            auto f2 = charlie.upper_bound(f1->second);
            if (f2 != charlie.end())
            {
                cout << x + 1 << " " << y + 1 << " " << f1->first + 1 << " " << f1->second + 1 << " " << f2->first + 1 << " " << f2->second + 1 << '\n';
                return;
            }
        }
    }
}
void solve()
{

    ll n, sum = 0;
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (auto &i : b)
        cin >> i;
    for (auto &i : c)
        cin >> i;
    ll piece = ceil(sum / 3.0);

    map<ll, ll> alice, bob, charlie;
    alice = find_subarray(a, piece);
    bob = find_subarray(b, piece);
    charlie = find_subarray(c, piece);
    findIndices(alice, bob, charlie);
    findIndices(alice, charlie, bob);
    findIndices(bob, charlie, alice);
    findIndices(bob, alice, charlie);
    findIndices(alice, bob, charlie);
    findIndices(charlie, alice, bob);
    findIndices(charlie, bob, alice);
    cout << "-1\n";
}

signed main()
{
#ifndef LOpieceAL
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