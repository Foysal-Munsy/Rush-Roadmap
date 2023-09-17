/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/16         *
 *    Time: 12:04:59           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int N;
    cin >> N;
    vector<int> arr(5);
    for (; N--;)
    {
        int X;
        cin >> X;
        arr[X]++;
    }
    arr[1] = arr[1] - min(arr[3], arr[1]);
    if (arr[2] & 1)
        arr[1] -= 2;
    if (arr[1] < 0)
        arr[1] = 0;
    int ans = arr[4] + arr[3] + (arr[2] + 1) / 2 + (arr[1] + 3) / 4;
    cout << ans << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}