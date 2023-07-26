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
10 9 8 7 6 . . . . n-1, n
*/
int sum(int n)
{
    if(n==0)return 0;

    //cout << n << '\n';
    return sum(n-1)+n;
}
void solve()
{
    int n;  cin >> n;
    cout << sum(n) << '\n';
    
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
