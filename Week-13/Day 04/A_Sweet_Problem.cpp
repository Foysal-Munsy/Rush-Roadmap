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
    int red, green, blue;
    // cin >> red >> green >> blue;
    vector<int> a(3);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    red = a[0], green = a[1], blue = a[2];
    /*7 4 10
    ans+=min number
    ans = 4;
    max number - min number
    10-4=6
    now 6 and 7 compare ,choose min 6
    ans+=6;
    total ans =10;
    8 1 4
    sum = 1;
    8-1=7
    */
    //     int minimum = min(red, min(green, blue));
    //     int ans = 0;
    //     ans += minimum;                           // 4
    //     int maximum = max(red, max(green, blue)); // 10
    //     int result = maximum - minimum;           // 10-4=6
    //     ans += result;
    //     cout << ans << nl;
    // int ans = 0;
    // int min = *min_element(a.begin(), a.end());
    // ans += min;

    // int mx = *max_element(a.begin(), a.end());
    // int temp = mx - min;
    // cout << temp << nl;
    if (a[2] <= a[0] + a[1])
        cout << (a[0] + a[1] + a[2]) / 2 << nl;
    else
        cout << a[0] + a[1] << nl;
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