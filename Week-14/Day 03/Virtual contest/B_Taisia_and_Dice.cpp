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
    int n, sum, r;
    cin >> n >> sum >> r;
    int curi = sum - r;
    // vector<int> ans;
    // ans.push_back(curi);
    // int count = 1; // ekta dice sesh ar ase dice - count!
    // dice ase 5 ta, total sum 9 , curi korse 4  baki sum 5-->1+2+2
    // baki sum ke remaining dice er modde vagavagi kore rakha lagbe and curi howa valuer kom ba soman e!
    //  ans 4+1+2+2
    vector<int> ans(n, 1);
    sum -= n;
    for (int i = 0; i < n; i++)
    {
        if (sum > 0)
        {
            int add = min(sum, curi - 1);
            ans[i] += add;
            sum -= add;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << nl;
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