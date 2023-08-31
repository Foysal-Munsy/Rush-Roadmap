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
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x] = i;
        /*
        how v[x] = i works!
        for arr=[6 ,4, 3, 5, 2, 1]
        simulation:
        i = 1, x = 6: v[6] = 1
        v = [0, 0, 0, 0, 0, 1]

        i = 2, x = 4: v[4] = 2
        v = [0, 0, 0, 2, 0, 1]

        i = 3, x = 3: v[3] = 3
        v = [0, 0, 3, 2, 0, 1]

        i = 4, x = 5: v[5] = 4
        v = [0, 0, 3, 2, 4, 1]

        i = 5, x = 2: v[2] = 5
        v = [0, 5, 3, 2, 4, 1]

        i = n=6 , x=1 : v[1]=6
        v=[6 ,5 ,3 ,2 ,4 ,1]

        */
    }
    int step = 0;
    for (int i = 1; i < n; i++)
        if (v[i] > v[i + 1])
            step++;
    cout << step << nl;
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