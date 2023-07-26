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
#define     PI 3.14159265358979323846
#define     in_range(i,x,y) for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define     yes    cout<<"YES"<<nl;
#define     Yes    cout<<"Yes"<<nl;
#define     no     cout<<"NO"<<nl;
#define     No     cout<<"No"<<nl;
#define     cin_array(x,o,n) for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define all_V(v) v.begin(), v.end()
#define all_A(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define sort_v(v) sort(ALL(v))
#define reverse_v(v) reverse(ALL(v))
#define sort_a(arr, sz) sort(ALLA(arr, sz))
#define reverse_a(arr, sz) reverse(ALLA(arr, sz))
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);
#define     nl '\n'
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);
bool is_palindrome(int n);

void solve()
{
    int n,k;    cin >> n >> k;
    vector<ll> a;
    for(int i=0; i<n; i++)
    {
        int x;  cin >> x;
        a.push_back(x);
    }
    int first = a[0], last = a[n-1];
    int first_count=0,last_count=0;
    int idx;
    for(int i=0; i<n; i++)
    {
        if(a[i]==first)
        {
            first_count++;
            if(first_count==k) idx = i;
        }
    }
    int final_count = 0;
    for(int i=idx+1; i<n; i++)
    {
        if(a[i]==last) last_count++;
    }
    //cout << first_count << " " << last_count << nl;
    if((first_count >= k && last_count >= k) || (first_count >= k && first == last))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
        solve();
    }
 
 
    return 0;
}
/* HELLO CPP*/
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}
