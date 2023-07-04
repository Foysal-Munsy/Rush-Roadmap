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
void solve()
{
    ll n,k;   cin >> n >> k;
    vl v;
    in_range(i,0,n-1)
    {
        ll x; cin >> x;
        v.push_back(x);
    }
    
    in_range(i,0,k-1)
    {
        ll a,b;      cin >> a >> b;

        auto itU = find(v.begin(), v.end(), a);
        auto itV = find(v.begin(), v.end(), b);

        if (itU == v.end() || itV == v.end()){no;}
        else if (itU < itV){yes;}
        else{no;}
    }
}
void test()
{
    ll n,k;     cin >> n >> k;
    map<ll, multiset<ll>> pos;
    in_range(i,1,n)
    {
        ll x;   cin >> x;
        pos[x].insert(i);
    }
    while(k--)
    {
        ll u, v;    cin >> u >> v;
        
        if(pos[u].size() == 0 || pos[v].size() == 0)
        {
            no;
        }
        else
        {
            if(*pos[u].begin() < *pos[v].rbegin())
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; 
    cin>>t;
    while(t--)
    {
        test();
    }


    return 0;
}