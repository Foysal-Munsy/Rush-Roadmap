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
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define PI 3.14159265358979323846
#define in_range(i, x, y) for (int i = x; i <= y; i++)
#define in_range_back(i, x, y) for (int i = y; i >= x; i--)
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n + 5);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int x = 0; x < (1 << 8); x++)
    {
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            int res = b ^ (arr[i] ^ x);
            b = res;
        }
        if (b == 0)
        {
            cout << x << nl;
            return;
        }
    }
    cout << -1 << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}