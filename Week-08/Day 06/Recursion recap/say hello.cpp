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

void say_hello(int n)
{
    if(n==0)return;
    say_hello(n-1);
    cout <<n <<" " << "HELLO\n";
    
}
void solve()
{
    int n;  cin >> n;
    say_hello(n);

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
