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
#define nl '\n'
#define PI 3.14159265358979323846
#define f1(i,n) for(int i=0;i<n;i++)
#define f2(j,n) for(int j=0;j<n;j++)
#define     in_range(i,x,y) for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y) for(int i=y;i>=x;i--)
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(nullptr);
#define Foysal cout.tie(NULL);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void cin_arr(vl &arr, ll n){f1(i,n) cin >> arr[i];}
void print_arr(vl &arr, ll n){f1(i,n) cout << arr[i] << " ";cout << "\n";}
bool is_palindrome(string str){int l=0,r=4 ;while(l<r){if(str[l]!=str[r]) return false;l++,r--;}return true;}

void solve()
{
    string s; cin >> s;
    int x; cin>>x;

    int h=x/60,m=x%60;

    int countt=0;

    map<string,bool>visited;

    while(!visited[s])
    {
        countt+=(is_palindrome(s));
        visited[s]=true;

        int hh=((s[0]-'0')*10)+(s[1]-'0');
        int mm=((s[3]-'0')*10)+(s[4]-'0');

        mm+=m;
        if(mm>59)
        {
            hh++;
        }
        mm%=60;

        hh+=h;
        hh%=24;

        s[0]=('0'+(hh/10));
        s[1]=('0'+(hh%10));

        s[3]=('0'+(mm/10));
        s[4]=('0'+(mm%10));
    }

    cout<<countt<<nl;

}
int main()
{
    Code By Foysal
    /*----------*/
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}
