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

//O(1) if(n<26) else O(n log n)
void solve()
{
    ll n;    cin >> n;
    string st;  cin >> st;

    if(n <26) {cout << "NO" << nl; return;}
    
    //else
    transform(st.begin(),st.end(),st.begin(), ::tolower);

    set<char> ch;
    for(auto c: st)
    {
        if(c>='a' && c<='z')
        {
            ch.insert(c);
        }
    }
    //for(auto c: ch) cout << c;

    if(ch.size() == 26){cout << "YES" << nl;}
    else{cout << "NO" << nl;} 

}

//O(n) using bitset for more faster
void test()
{
    ll n;    cin >> n;
    string st;  cin >> st;

    if(n <26) {cout << "NO" << nl; return;}
    
    //else
    transform(st.begin(),st.end(),st.begin(), ::tolower);   

    bitset<26> chars;
    for(auto c: st)
    {
        if(c>='a' && c<='z') // Set the corresponding bit in the bitset
        {
            chars.set(c - 'a');
        }
    }
    if(chars.all()) cout << "YES" << nl;
    else cout << "NO" << nl;

}
int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; 
    //cin>>t;
    while(t--)
    {
       // solve();
       test();
    }


    return 0;
}
