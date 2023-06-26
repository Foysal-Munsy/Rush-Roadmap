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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}

//submitted version
void test()
{
    ll n,h,m;   cin >> n >> h >> m;
    ll hour,mnt;
    ll mnt_cnvrt,ttl_mnt;
    mnt_cnvrt = (h*60) + m;
    ll gvn_mnt_cnvrt , ans_hour , ans_mnt;

    ll min_diff = INT_MAX;
    while(n--)
    {   
        cin >> hour >> mnt;
        gvn_mnt_cnvrt = (hour*60) + mnt;
        
        if(gvn_mnt_cnvrt < mnt_cnvrt) // handle case where given time is earlier than target time
            gvn_mnt_cnvrt += 24*60; // add 24 hours to given time

        ttl_mnt = abs(gvn_mnt_cnvrt - mnt_cnvrt);
        if(ttl_mnt < min_diff)
        {
            min_diff = ttl_mnt; 
            ans_hour = ttl_mnt / 60;
            ans_mnt = ttl_mnt % 60;
        }
    }
    cout << ans_hour << " " << ans_mnt << nl;   
}

//trying to readable my code after ac.
void solve()
{
    int n, h, m;
    cin >> n >> h >> m;
    int target = h * 60 + m;
    int min_diff = INT_MAX;
    while (n--)
    {
        int hour, minute;
        cin >> hour >> minute;
        int given = hour * 60 + minute;
        if (given < target)
            given += 24 * 60;
        min_diff = min(min_diff, given - target);
    }
    cout << min_diff / 60 << " " << min_diff % 60 << endl;
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

