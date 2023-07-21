//AC
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
#define     nl '\n'
#define     PI 3.14159265358979323846
#define     f1(i,n)     for(int i=0;i<n;i++)
#define     f2(j,n)     for(int j=0;j<n;j++)
#define     in_range(i,x,y) for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define     yes    cout<<"YES"<<nl;
#define     Yes    cout<<"Yes"<<nl;
#define     no     cout<<"NO"<<nl;
#define     No     cout<<"No"<<nl;
#define     cin_array(x,o,n) for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_array(x,o,n) for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<nl;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);

const int N = 2e5 + 5;
int t, n, m;
vector<int> fa(N), d(N);
int find(int x)
{
    if (fa[x] == x)
        return x;
    int root = find(fa[x]);
    d[x] += d[fa[x]];
    return fa[x] = root;
}
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        fa[i] = i, d[i] = 0;
    bool flag = true;
    for (int i = 1, x, y, z; i <= m; i++)
    {
        cin >> x >> y >> z;
        int fx = find(x), fy = find(y);
        if (fx == fy)
        {
            if (d[x] - d[y] != z)
                flag = false;
        }
        else
        {
            fa[fx] = fy;
            d[fx] = d[y] - d[x] + z;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
}
int main()
{
    Code By Foysal
    /*----------*/
    ll t=1; 
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}

