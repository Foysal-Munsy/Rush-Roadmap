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
    ll n;   cin >> n;
    vector<pair<char,int>>s;
    in_range(i,0,n-1)
    {
        char c; cin >> c;
        s.push_back({c,(i+1)&1});
    }

    bool all_same = true;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        auto first_value = it->second;
        auto different = find_if(it, s.end(), [&](const pair<char, int> &p)
        { return p.first == it->first && p.second != first_value; });
        if (different != s.end())
        {
            all_same = false;
            break;
        }
    }
    if (all_same)
        cout << "YES\n";
    else
        cout << "NO\n";
}

void test()
{
    ll n;   cin >> n;
    vector<char> s(n);
    for (ll i = 0; i < n; i++)
        cin >> s[i];

    bool all_same = true;
    unordered_set<char> odd, even;
    for (ll i = 0; i < n; i++)
    {
        if ((i&1)==0)
        {
            if (odd.count(s[i]))
            {
                all_same = false;
                break;
            }
            even.insert(s[i]);
        }
        else
        {
            if (even.count(s[i]))
            {
                all_same = false;
                break;
            }
            odd.insert(s[i]);
        }
    }

    if (all_same)
        cout << "YES\n";
    else
        cout << "NO\n";
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