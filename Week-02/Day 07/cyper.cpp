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
#define     in_range(i,x,y) for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(nullptr);
#define Foysal cout.tie(NULL);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void cin_arr(vl &arr, ll n){f1(i,n) cin >> arr[i];}
void print_arr(vl &arr, ll n){f1(i,n) cout << arr[i] << " ";cout << "\n";}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}

void solve()
{
    ll n; cin >> n;

    vl a(n+1); cin_arr(a,n);

    in_range(i,0,n-1)
    {
        ll x; cin >> x;
        string s; cin >> s;

        for(auto c:s)
        {
            if(c == 'D')
            {
                a[i]++;
                if(a[i]==10) a[i]=0;
            }
            else
            {
                a[i]--;
                if(a[i]==-1) a[i]=9;
            }
        }
    }
    print_arr(a,n);

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
