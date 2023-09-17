/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/17         *
 *    Time: 22:53:46           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
bool is_one_one(vector<pair<int, int>> &p)
{
    if (p.back() == make_pair(1, 1))
        return true;
    return false;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int, int>> points;
    int x = 0, y = 0;
    points.push_back(make_pair(0, 0));
    for (auto ch : s)
    {
        if (ch == 'U' and !is_one_one(points))
        {
            points.back().second += 1;
        }
        else if (ch == 'R' and !is_one_one(points))
        {
            points.back().first += 1;
        }
        else if (ch == 'L' and !is_one_one(points))
        {
            points.back().first -= 1;
        }
        else if (ch == 'D' and !is_one_one(points))
        {
            points.back().second -= 1;
        }
    }
    cout << (is_one_one(points) ? "YES" : "NO") << nl;
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