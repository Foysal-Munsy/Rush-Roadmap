/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &i : b)
        cin >> i;
    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++)
    {
        if (b[i - 1] <= b[i])
        {
            a.push_back(b[i]);
        }
        else
        {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << nl;
    for (auto x : a)
    {
        cout << x << ' ';
    }
    cout << nl;
}
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
        solve();
        cs++;
    }
    return 0;
}
/*
6
3
4 6 3
----
4
4 5 6 3
---


3
1 2 3
--
5
1 1 2 2 3
--


5
1 7 9 5 7
--
8
1 6 7 8 9 5 6 7
--


1
144
--
1
144
--


2
1 1
--
2
1 1
--



5
1 2 2 1 1
--
6
1 1 2 2 1 1
*/
