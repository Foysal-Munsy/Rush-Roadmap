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

int digit_sum(int n)
{
    if(n==0) return 0;
    int last = n%10;
    int remaining = n/10;
   // cout << remaining << " " << last << '\n';
    return digit_sum(remaining)+last;

}
void solve()
{
    int n;  cin >> n;
    cout << digit_sum(n) << '\n';
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; 
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
