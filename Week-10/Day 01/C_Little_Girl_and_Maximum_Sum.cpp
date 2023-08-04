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
    ll n, q;
    cin >> n >> q;
    vector<ll> input(n), diff(n + 2);
    cin_array(input, 0, n - 1);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        diff[l - 1]++;
        diff[r]--;
    }
    for (ll i = 1; i <= n; i++)
        diff[i] += diff[i - 1];

    sort(input.begin(), input.end(), greater<ll>());
    sort(diff.begin(), diff.end(), greater<ll>());

    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum += (diff[i] * input[i]);

    cout << sum << nl;
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