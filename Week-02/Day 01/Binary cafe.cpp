/**

”*°•.˜”*°• بسم الله الرحمن الرحيم •°*”˜.•°*”˜

**/
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
#define PI 3.14159265358979323846
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k>40)
    {
        cout << n + 1 << endl;
        return;
    }
    ll x = 1;
    while(k--)
    {
        x *= 2;
    }
    cout<<min(x, n+1)<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Write C++ code here
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }

    return 0;
}
