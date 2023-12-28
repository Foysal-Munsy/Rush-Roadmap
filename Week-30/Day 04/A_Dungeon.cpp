//
// Created by Foysal Munsy on 25 / 12 / 2023
// Time: 11 : 53 : 39
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

void solve()
{
    vector<ll> a(3);
    for (auto &i : a)
        cin >> i;
    ll tot_health = a[0] + a[1] + a[2];
    /*
    10 1 7
    total =18;
    18%9==0 but 18/9=2 which is greater than my mn element so ans is No.
    after every 6 shots---> one enhanced shot .. enhanced shot deals 1 damage for three of them
    6 +3=9
    6 +3=9
    ------
         18
    but 18/9 ==2 ,min was 1 so for the first enhance shot 1 became 0 where all others not..
    so ans should be NO?? Lets try...
    */
    ll mn_health = *min_element(all(a));
    bool is_zero = (tot_health % 9 == 0) ? true : false;
    bool is_less_equ = (tot_health / 9 <= mn_health) ? true : false;

    cout << (is_zero and is_less_equ ? "YES\n" : "NO\n");
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