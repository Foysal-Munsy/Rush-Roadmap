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
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        v[i].resize(n - 1);
        for (int j = 0; j < n - 1; j++)
        {
            cin >> v[i][j];
        }
    }
    int prothom = v[0][0];
    // cout << prothom << nl;
    if (prothom != v[1][0])
    {
        prothom = v[2][0];
    }
    vector<int> ans;
    ans.push_back(prothom);
    // cout << prothom;
    // cout << v[1][0];
    for (int row = 0; row < n; row++)
    {
        if (v[row][0] != prothom) // each row er jei value ta prothom value theke alada
        {                         // setar jonno operation:
            for (int col = 0; col < n - 1; col++)
                ans.push_back(v[row][col]);
        }
    }
    for (auto i : ans)
        cout << i << " ";
    cout << "\n";
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