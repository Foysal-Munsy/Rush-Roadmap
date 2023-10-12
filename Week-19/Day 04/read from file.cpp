/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/10/09         *
 *    Time: 11:25:32           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    string fileName("Documents/XPSC/Rush-Roadmap/Week-19/Day04/input.txt");
    ifstream myfile(fileName);
    if (!myfile)
    {
        cout << -1 << nl;
        return;
    }
    string s;
    while (getline(myfile, s))
    {
        cout << s << nl;
    }
    myfile.close();
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