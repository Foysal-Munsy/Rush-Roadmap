/********************
*   -------------   *
*   Author:Foysal   *
*   -------------   *
********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define     nl '\n'
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);

void solve()
{
    int n;  cin >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<vector<int>>subsets;
    for(int i=0; i< (1<<n); i++)
    {
        vector<int>subset;
        for(int j=0; j<n; j++)
        {
            if((i&(1<<j)) !=0)
            {
                subset.push_back(v[j]);
            }
        }
        subsets.push_back(subset);
    }

    for(int i=0; i<subsets.size(); i++)
    {
        for(auto val: subsets[i])
        {
            cout << val << " ";
        }
        cout << nl;
    }
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; 
    //cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
