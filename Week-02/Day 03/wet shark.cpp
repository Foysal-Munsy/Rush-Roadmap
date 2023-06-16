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

void solve()
{
    ll n; cin >> n;
    ll sum = 0;
    vl a;
    while(n--)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        sum +=x;

    }
    if(sum %2==0) //even
        cout << sum << nl;
    else //odd
    {
        sort(a.begin(),a.end());
        int min_odd = -1;
        for(ll i=0; i<a.size(); i++)
        {
            if(a[i] %2 == 1)
            {
                min_odd = a[i];
                break;
            }
        }

        ll ans = sum - min_odd;
        cout << ans << nl;
    }
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; //cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
