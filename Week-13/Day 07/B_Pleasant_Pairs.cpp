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
    long long n;
    cin >> n;
    vector<pair<long long, long long>> a(n + 5);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
        // 3 1 5 9 2
        // val,idx
        //[(3,1), (1,2), (5,3), (9,4), (2,5)]
    }
    sort(a.begin() + 1, a.begin() + n + 1);
    //[(1,2), (2,5), (3,1), (5,3), (9,4)]-->sorted
    // 1-> (1,2) , (3,1)
    // 2-> (1,2) , (5,3)
    // 3-> (2,5) , (3,1)
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].first * a[j].first > n + n)
                break;
            if (a[i].first * a[j].first == a[i].second + a[j].second)
                // cout << a[i].first << " * " << a[j].first << " == " << a[i].second << " + " << a[j].second << nl;
                count++;
        }
    }
    cout << count << '\n';
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