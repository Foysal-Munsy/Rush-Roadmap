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

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a,b,c;
    ll ans = INT_MIN;
    for(ll i=0; i<n; i++)
    {
        ll x;   cin >> x;
        ans = max(ans , x);
        //if(ans < x) ans = x;
        a.push_back(x);
    }
    for (ll i = 0; i < n; i++)
    {
        if (ans == a[i])
            c.push_back(a[i]);
        else
            b.push_back(a[i]);
    }
    if (b.size() == 0 || c.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << b.size() << " " << c.size() << nl;
    for (ll i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << nl;
    for (ll i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t=1; cin>>t;
    while(t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}