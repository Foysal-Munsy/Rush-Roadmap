/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
// bool is_sum_of_ab(ll x)
// {
//     ll limit = cbrt(x);
//     for (ll a = 1; a <= limit; a++)
//     {
//         ll low = 1, high = limit;

//         while (low <= high)
//         {
//             ll mid = (low + high) / 2;
//             if (a * a * a + mid * mid * mid == x)
//                 return true;

//             else if (a * a * a + mid * mid * mid < x)
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }
//     return false;
// }

void test()
{
    set<ll> S;
    for (ll i = 1; (i * i * i) <= 1000000000000; i++)
    {
        S.insert(i * i * i);
    }
    ///---------////

    bool flag = false;
    ll X;
    cin >> X;
    for (ll s : S)
    {
        if (s > X)
            break;
        ll T = X - s;
        if (S.find(T) != S.end())
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
}

// void solve()
// {
//     ll x;
//     cin >> x;
//     cout << (is_sum_of_ab(x) ? "YES" : "NO") << nl;
// }
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        // solve();
        test();
        cs++;
    }
    return 0;
}