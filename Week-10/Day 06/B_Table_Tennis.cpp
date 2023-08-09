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
#define     cin_vector(v,o,n) for(int i=o;i<=n;i++){ll x; cin>>x; v.push_back(x);}
#define     cout_vector(v,o,n) for(int i=o;i<=n;i++){cout<<v[i]<<" ";}cout<<nl;
#define     nl '\n'

ll n , k , win = 0 , maxP = 0;
vector<ll> a(505);
void solve()
{
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxP = max(maxP, a[i]);
    }
    ll curr_idx = a[1];
    // cout << maxP << " " << curr_idx << nl;
    for (ll i = 2; i <= n; i++)
    {
        if (curr_idx > a[i])
        {
            win++;
        }
        else
        {
            curr_idx = a[i];
            win = 0;
        }
        if (win == k || curr_idx == maxP)
        {
            cout << curr_idx << nl;
            return ;
        }
    }
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