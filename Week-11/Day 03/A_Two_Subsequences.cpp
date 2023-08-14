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
    string a ,b , c;
    cin >> a;
    char min_char = a[0];
    for (auto ch : a)
    {
        if (ch < min_char)
        {
            min_char = ch;
        }
    }
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (a[i] < min_char)
    //     {
    //         min_char = a[i];
    //     }
    // }
    b = min_char;
    bool removed = false;
    for (auto ch : a)
    {
        if (ch == min_char && !removed)
        {
            removed = true;
        }
        else
        {
            c += ch;
        }
    }
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (a[i] == min_char && !removed)
    //     {
    //         removed = true;
    //     }
    //     else
    //     {
    //         c += a[i];
    //     }
    // }
    cout << b << " " << c << nl;
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
