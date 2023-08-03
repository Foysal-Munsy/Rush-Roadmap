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
/*
1 -1
2 -2
5 -3
0 -4
3 -5
1 -6
0 -7
2 -8
4 -9
2
7
1010110
10
1011011010

*/
void solve()
{
    ll t, n, i;
    string s;
    cin >> n >> s; 
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1 - i]) break;// first index == last index
    }
    //cout << i << nl;
    cout << n - (i * 2) << nl;
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
    //solve();
    return 0;
}