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

void solve()
{
    
        ll n, k, mx = 0;    cin >> n >> k;

        vector<pair<ll, ll>> v(n + 1);
        v[0].first = 0;
        v[0].second = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
            v[i].first = v[i].first % k;
            mx = max(v[i].first, mx);
        }
        sort(v.begin(), v.end());
        // for (ll i = 1; i<=n; i++)
        // {
        //     cout << "{"<< v[i].first << " "<< v[i].second <<"}"<< " ";
        // }
        // cout << nl;
        for (int i = 1; i <= n; i++)
        {
            if (v[i].first == 0)
            {
                cout << v[i].second << " ";
            }
        }
       // cout << nl;
        int i = n, x = n, p = n;
        while (i > 0)
        {
            if (!(v[i].first == mx && v[i].first == v[i - 1].first) && mx != 0)
            {
                for (int j = x; j <= p; j++)
                {
                    cout << v[j].second << " ";
                }
                p = x - 1;
                mx = v[i - 1].first;
            }
            i--;
            x--;
        }

        cout << nl;
}

void test()
{
        ll N, K;    cin >> N >> K;
        vl A(N);    cin_array(A,0,N-1);

        vector<pair<ll, ll>> ans;
        in_range(i, 0, N - 1)
        {
            A[i] %= K;
            if (A[i] == 0)
                ans.push_back({K, N - i});
            else
                ans.push_back({A[i] % K, N - i});
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());

        in_range(i, 0, ans.size() - 1)
             cout << N - ans[i].second + 1 << " ";
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
        test();
    }
    return 0;
}