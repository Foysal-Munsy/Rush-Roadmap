// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int t, n, q, x, y;
// int a[200005];
// signed main()
// {
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//             cin >> a[i];
//         cin >> q;
//         while (q--)
//         {
//             cin >> x >> y;
//             int ans = 0;
//             for (int i = 1; i <= n; i++)
//                 for (int j = i + 1; j <= n; j++)
//                     if (a[i] + a[j] == x && a[i] * a[j] == y)
//                         ans++;
//             cout << ans << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
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

ll t, n, q, x, y;
ll a[200005];
unordered_map<ll, ll> freq;
void solve()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll target = x - a[i];
            if (y % a[i] == 0 && freq.count(target) && y / a[i] == target)
            {
                ans += freq[target];
                if (target == a[i])
                    ans--;
            }
        }
        cout << ans / 2 << " ";
    }
    cout << nl;
    freq.clear();
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