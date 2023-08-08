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

void test()
{
    int n;
    cin>>n;
    int b[n*(n-1)/2];
    for(int i=0;i<n*(n-1)/2;i++){
        cin>>b[i];
    }
    sort(b,b+n*(n-1)/2);
    
}
void solve()
{
    int n;  vi b;
    int m = n * (n - 1) / 2;
    in_range(i,0, m-1)
    {
        int x;  cin >> x;
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    vpi tmp;
    in_range(i,0, m-1)
    {
        int x = b[i];
        int cnt = 0;
        while (i < m && b[i] == x)
        {
            cnt++;
            i++;
        }
        i--;
        tmp.push_back({x, cnt});
    }
    vi ans;
    int mx = n - 1;
    m = tmp.size();

    in_range(k, 0, m-1)
    {
        while (tmp[k].second >= 1)
        {
            ans.push_back(tmp[k].first);
            assert(tmp[k].second >= mx);
            tmp[k].second -= mx;
            mx--;
        }
    }
    if (ans.size() < n)
        ans.push_back(1e9);
    reverse(ans.begin() , ans.end());
    for(auto e : ans) cout << e;
    cout << nl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll t=1; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}