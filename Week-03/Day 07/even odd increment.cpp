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
#define     in_range(i,x,y) for(ll i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define     cin_array(x,o,n) for(ll i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}

void solve()
{
    ll n,q; cin >> n >> q;
    vl v(n); cin_array(v,0,n-1);
    while(q--)
    {
        ll t, x;
        cin >> t >> x;

        if(t==0)
        {
            ll sum = 0;
            in_range(i,0,n-1)
            {
                if(v[i]%2==0)
                {
                    v[i] +=x;
                }
                //cout << v[i] << " ";
            }
            sum = accumulate(v.begin(),v.end(),0LL);
            cout <<sum << nl;
        }
        else
        {
            ll sum = 0;
            in_range(i,0,n-1)
            {
                if(v[i]%2==1)
                {
                    v[i]+=x;
                }
                //cout << v[i] << " ";
            }
            sum = accumulate(v.begin(),v.end(),0LL);
            cout <<sum << nl;
        }

    }
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
