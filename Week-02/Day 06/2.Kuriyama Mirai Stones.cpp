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
    vl v(n);
    for(ll i=0; i<n; i++)
        cin >> v[i];

    vl prefix1(n+1),prefix2(n+1);

    for(ll i=1; i<=n; i++)
        prefix1[i] = (prefix1[i-1] + v[i-1]);

    sort(v.begin(), v.end());
    for(ll i=1; i<=n; i++)
        prefix2[i] = (prefix2[i-1] + v[i-1]);

    ll q; cin >> q;
    while(q--)
    {
        ll type, l, r;
        cin >> type >> l >> r;
        if(type==1)
            cout << prefix1[r] - prefix1[l-1] << nl;
        else
            cout << prefix2[r] - prefix2[l-1] << nl;
    }
}
int main()
{
    Code By Foysal
    /*----------*/
//    ll t; cin>>t;
//    while(t--)
//    {
        solve();
//    }


    return 0;
}
