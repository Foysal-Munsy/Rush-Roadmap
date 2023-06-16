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
ll solution(vl &arr, ll n, ll l, ll r)
{
    vl prefix;
    ll sum = 0;
    for(ll i=0; i<n; i++)
    {
        sum += arr[i];
        prefix.push_back(sum);
    }
    ll result = 0;
    if(l== 0) result = prefix[r];
    else result = prefix[r] - prefix[l-1];
    return result;
}
void solve()
{

    ll n; cin >> n;
    vl arr(n);
    vl brr(n);
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(brr.begin(),brr.end());
    ll query; cin >> query;
    while(query--)
    {
        ll type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            ll result = solution(arr,n,l,r);
            cout << result << endl;
        }
        if(type==2)
        {

            ll ans = solution(brr,n,l,r);
            cout << ans << endl;
        }
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
