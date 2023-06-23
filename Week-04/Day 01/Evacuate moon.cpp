/********************
*   -------------   *
*   Author:Foysal   *
*   -------------   *
********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define     cin_array(x,o,n) for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}

void solve()
{
    ll n,m,h;   cin >> n >> m >> h; 
    // n-- car, m-- power outlet, h-- hours
    long long int cap[n],pwr[m]; // capacity of car over n, power of outlet over m
    for(ll i=0; i<n; i++) cin >> cap[i];
    for(ll i=0; i<m; i++) cin >> pwr[i];

    sort(cap,cap+n, greater<ll>());
    sort(pwr,pwr+m,greater<ll>());
    
    ll ans = 0;
    for(ll i=0; i<min(n,m); i++)
        ans += min(cap[i] , pwr[i]*h);
    
    cout << ans << nl;

    
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
/*
Observation
From Line 41 to 50
First, I stored the capacity of the car in the "cap" array 
and the power of outlets in the "pwr" array. 
Then I sorted them in dsc order(greater to lower). 
Then a loop over a minimum of (n & m), then find 
the minimum of cap[i] and pwr[i] multiplication with hour, 
and that is plus equal to the expected answer.
*/