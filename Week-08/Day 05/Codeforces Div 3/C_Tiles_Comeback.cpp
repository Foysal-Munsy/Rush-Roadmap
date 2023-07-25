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

void solve()
{
    ll n,k;   cin >> n >> k;
    vl v;
    for(int i=0; i<n; i++)
    {
        int x;  cin >> x;
        v.push_back(x);
    }
    if (all_of(v.begin(), v.end(), [&](int i)
               { return i == v[0]; }))
    {
        cout << "YES" << endl; return;
    }
    int first = v[0];
    int last = v[n - 1];
    int first_count = 0;
    int last_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i] == first)
        {
            first_count++;
        }
        if (first_count == k)
        {
            break;
        }
    }
    for (i = i + 1; i < n; i++)
    {
         if (v[i] == last)
        {
            last_count++;
        }
        if (last_count == k)
        {
            break;
        }
    }
   // cout << first_count << " " << last_count << nl;
    //if()
    if (first_count == k && last_count == k)
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n"; return;
    }
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
