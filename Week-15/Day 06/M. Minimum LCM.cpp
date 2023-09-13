/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int min_LCM(int x)
{
    int ans = 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            ans = x / i;
            break;
        }
    }
    return ans;
}
void solve()
{
    int N;
    cin >> N;
    int X = min_LCM(N);

    cout << X << " " << N - X << nl;
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