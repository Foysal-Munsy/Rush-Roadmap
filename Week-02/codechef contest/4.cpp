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
#define nl '\n'
#define PI 3.14159265358979323846
#define f1(i,n) for(int i=0;i<n;i++)
#define f2(j,n) for(int j=0;j<n;j++)
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(nullptr);
#define Foysal cout.tie(NULL);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void printarr(vl &arr, ll n){f1(i,n) cout << arr[i] << " ";cout << "\n";}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}
void test()
{
    vector<ll> A;
    for (ll i = 0, x; i < n; i++)
    {
        cin >> x;
        if ((x & k) == k)
            A.push_back(x);
    }
    if (!A.size())
    {
        no;
        return;
    }
    ll ans = A[0];
    for (int j = 1; j < (int)A.size(); j++)
    {
        ans = A[j] & ans;
    }
    if (ans == k)
        yes;
    else
        no;
}
void solve()
{
    ll n,k; cin >> n >> k;
    vl a;
    for(ll i=0; i<n; i++)
    {
        int x; cin >> x;
        if ((x & k) == k)
            a.push_back(x);
    }
    if(a.empty()) cout << "NO" <<endl;

    for(ll j=1; i<a.size(); i++)
    {
        if(b[i]&b[i+1]==k)
            flag =1;
    }
    if(b.empty()) cout << "NO" <<endl;
    if(flag=1) cout << "YES" << endl;
    else cout << "NO" <<endl;
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
