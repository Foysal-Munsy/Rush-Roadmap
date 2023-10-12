/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/10         *
 *    Time: 20:06:38           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

long double dist(int px, int py, int ax, int ay, int bx, int by)
{
    // hypot = sqrt(ax^2 + ay^2) --> #include <math.h>

    long double ans = max(hypot(ax, ay), hypot(ax - px, ay - py));
    long double ans2 = max(hypot(ax, ay), hypot(bx - px, by - py));
    ans2 = max(ans2, hypot(ax - bx, ay - by) / (long double)2);
    return min(ans, ans2);
}
void solve()
{
    int px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;

    long double d1 = dist(px, py, ax, ay, bx, by);
    long double d2 = dist(px, py, bx, by, ax, ay);

    long double w = min(d1, d2);
    cout << fixed << setprecision(10) << w << nl;
    // cout << (1 << 2);
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