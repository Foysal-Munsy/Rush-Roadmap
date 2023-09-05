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
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int max_val = max(a[i], a[i + 1]);
        int min_val = min(a[i], a[i + 1]);
        for (; max_val > min_val * 2;)
        {
            count++;
            min_val *= 2;
        }
    }

    cout << count << nl;
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
        // test();
        cs++;
    }
    return 0;
}