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
//O(n^2 log n) --> set not accepted due to TLE
//use unordered_set<ll> st(v.begin(), v.end());
//then complexity will be O(n^2) only
void solve()
{
    ll n;   cin >> n;
    vl v; 
    in_range(i,0,n-1)
    {
        ll x;   cin >> x;
        v.push_back(x);
    }
    ll countt = 0;
    while(1)
    {
        unordered_set<ll> st(v.begin(), v.end());
        if(st.size()==v.size())
        {
            break;
        }
        v.erase(v.begin());
        countt++;
    }
    cout << countt << nl;
        
}

void solve1()
{
    ll n; cin >> n;
    vl v;
    in_range(i,0,n-1)
    {
        ll x; cin >> x;
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    unordered_set<ll>st;
    ll ans = 0;
    in_range(i,0,n-1)
    {
        st.insert(v[i]);

        if(st.size() != i+1)
        {
            ans = n- st.size();
            break;
        }
    }
    

    cout << ans << endl;
}

int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; 
    cin>>t;
    while(t--)
    {
        solve1();
    }


    return 0;
}
