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
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int left = 1, right = n;
    while (left < n and a[left] <= a[left + 1])
        left++;

    while (right > 1 and a[right] <= a[right - 1])
        right--;

    if (left >= right)
        cout << "YES\n";
    else
        cout << "NO\n";
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