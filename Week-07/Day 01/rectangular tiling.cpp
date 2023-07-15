/********************
*   -------------   *
*   Author:Foysal   *
*   -------------   *
********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define     nl '\n'
#define     PI 3.14159265358979323846
#define     f1(i,n)     for(int i=0;i<n;i++)
#define     f2(j,n)     for(int j=0;j<n;j++)
#define     in_range(i,x,y) for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define     yes    cout<<"YES"<<nl;
#define     Yes    cout<<"Yes"<<nl;
#define     no     cout<<"NO"<<nl;
#define     No     cout<<"No"<<nl;
#define     cin_array(x,o,n) for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);

//problem link :https://www.codechef.com/problems/RCT
void solve()
{
    int w,l;    cin >> w >> l;
    
    int product = w*l;
    if(product & 1) //product %2 ==1 same ase product & 1 ==1
    {
        no;
    }
    else yes;
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
/*
another solution using bitwise operator
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t) {
        int l, w;
        cin >> l >> w;
        int s = 2 * l * w; //Calculate the perimeter of the floor using the formula
        if ((s & 3) == 0) // s % 4==0 same as (s & 3) == 0
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        t--;
    }
    return 0;
}

*/