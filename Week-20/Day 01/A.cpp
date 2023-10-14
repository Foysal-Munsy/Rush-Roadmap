#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int primeFactors(int n)
{
    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        return 2;
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            // cout << i << " ";
            return i;
            n = n / i;
        }
    }

    if (n > 2)
        return n;
    // cout << n << " ";
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> V;
    vector<int> idx;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        V.push_back(primeFactors(x));
        // if (x % k == 0)
        //     V[i] = 0;
        // else
        // {
        //     V[i] = -1;
        //     idx.push_back(i + 1);
        // }
    }
    for (auto i : V)
        cout << i << " ";
    // if (idx.size() == 0)
    // {
    //     cout << 0 << nl;
    // }
    // else
    // {
    //     int track = 0;
    //     vector<ll> pref(idx.size());
    //     if (idx.size() == 1)
    //         track = idx[0];
    //     else
    //     {
    //         for (ll i = 1; i < idx.size(); i++)
    //         {
    //             pref[i - 1] = idx[i] - idx[i - 1];
    //         }
    //         pref[idx.size() - 1] = (idx.size() + 1) - idx[n - 1];
    //         for (auto i : pref)
    //         {
    //             // if (i - 1 == k)
    //             cout << i << " ";
    //         }
    //     }

    //
    // if (track < k)
    // {
    //     cout << 0 << nl;
    // }
    // else
    // {
    //     cout << track + 1 << nl;
    // }
    // }

    // for (auto i : idx)
    //     cout << i << " ";
    // cout << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
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