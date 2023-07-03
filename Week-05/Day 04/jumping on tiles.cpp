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
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}

void solve()
{
    string s;
    cin >> s;
    int n;
    n = s.size();

    vector<pair<char, int>> order;

    char mn = min(s[0], s[n - 1]);
    char mx = max(s[0], s[n - 1]);

    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= mn and s[i] <= mx))
        {
            order.push_back({s[i], i});
        }
    }

    sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
         { return a.second < b.second; });

    if (order.size() > 2)
    {
        sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
             {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
    }

    vector<int> seq;

    ll moves = 0;

    seq.push_back(1);

    for (int i = 1; i < order.size(); i++)
    {
        moves += abs(order[i - 1].first - order[i].first);
        seq.push_back(order[i].second + 1);
    }

    cout << moves << " " << seq.size() << endl;

    for (auto i : seq)
    {
        cout << i << " ";
    }
    cout << nl;
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
