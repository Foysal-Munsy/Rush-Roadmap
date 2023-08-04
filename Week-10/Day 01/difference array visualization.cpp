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
#define     cin_array(x,o,n) for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define all_V(v) v.begin(), v.end()
#define all_A(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define sort_v(v) sort(all_V(v))
#define reverse_v(v) reverse(all_V(v))
#define sort_a(arr, sz) sort(all_A(arr, sz))
#define reverse_a(arr, sz) reverse(all_A(arr, sz))
#define     nl '\n'

void solve()
{
    int n , q; cin >> n >> q;                              // Size of array
    vector<int> elements(n); // 1 based indexing
    cin_array(elements,1,n);
                                            // n+2 because we need are not using the 0-th index and we need one more element in the array.
    vector<int> diff(n + 2, 0);

    //int updateValue = 10;
    in_range(i,1,q)
    {
        ll l,r;     cin >> l >> r;
        diff[l] += elements[l];
        diff[r+1] -= elements[r];
    }
    // diff[l] += updateValue;
    // diff[r + 1] -= updateValue;

    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
        elements[i] += diff[i];
    }
    for (int i = 1; i <= n; i++) cout << elements[i] << " ";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll t=1; //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}