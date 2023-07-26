/********************
*   -------------   *
*   Author:Foysal   *
*   -------------   *
********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);

/*
when n=5,

1 2 3 4 5
1 2 3 4 
1 2 3 
1 2 
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
*/
void pattern(int n)
{
    if(n==1){cout << 1 << '\n';return;}
    for(int i=1; i<=n; i++)
    {
        cout << i << " ";
    }
    cout << '\n';
    pattern(n-1);
    for(int i=1; i<=n; i++)
    {
        cout << i << " ";
    }
    cout << '\n';
    
}
void solve()
{
    int n; cin >> n;
    pattern(n);
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
