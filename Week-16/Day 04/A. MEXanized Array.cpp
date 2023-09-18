/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/18         *
 *    Time: 20:48:00           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int Mex(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    int mex = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec[i] > mex)
        {
            return mex;
        }
        else if (vec[i] == mex)
        {
            ++mex;
        }
    }
    return mex;
}
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v;
    int track = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            v.push_back(i);
            track = i;
        }
    }
    while (v.size() != n)
    {
        if (x == k)
            v.push_back(x - 1);
        else
            v.push_back(x);
    }
    // cout << track << nl;
    int sum = 0;
    // for (auto i : v)
    //     cout << i << " ";
    // cout << nl;
    for (auto i : v)
        sum += i;
    // if (Mex(v) != k or track > x)
    // {
    //     cout << -1 << nl;
    // }
    // else
    //     cout << sum << nl;
    cout << track << nl;
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