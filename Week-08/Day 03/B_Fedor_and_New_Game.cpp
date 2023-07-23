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
    int n,m,k;  cin >> n >> m >> k;

    int arr[m+1];
    for(int i=0; i<=m; i++) cin >> arr[i];

    int ans=0;
    for(int i=0; i<m; i++)
    {
        if(__builtin_popcount(arr[i]^arr[m]) <=k) ans++;
    }
    cout << ans << nl;
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
