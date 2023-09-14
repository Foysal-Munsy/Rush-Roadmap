/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

bool canMakeCopies(int mid, int x, int y, int n)
{
    return (mid / x + mid / y) >= n - 1;
}
void solve()
{
    int N, X, Y;
    cin >> N >> X >> Y;

    // 1sec-> 1+1
    // 2sec->1
    // after two sec hoise 3ta
    // abar 2 sec e 2 ta pabo total 5 ta, and second 4 ta
    if (X > Y)
        swap(X, Y);
    int l = 0, r = 1e9, ans = Y;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (canMakeCopies(mid, X, Y, N))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    int RESULT = ans + X;
    cout << RESULT << nl;
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