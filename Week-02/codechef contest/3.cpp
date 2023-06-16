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
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(nullptr);
#define Foysal cout.tie(NULL);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void printarr(vl &arr, ll n){f1(i,n) cout << arr[i] << " ";cout << "\n";}
bool is_palindrome(int n){string str = to_string(n);for(int i=0,j=str.size()-1 ; i<=j ; i++,j--){if(str[i]!=str[j]) return false;}return true;}

void solve()
{
    ll n; cin >> n; // days
    vl a; vl b;
    for(ll i=0; i<n; i++)
    {
        int x;
        cin >> x ;
        if(x !=0)
            a.push_back(1);
        else
            a.push_back(0);
    }
    for(ll i=0; i<n; i++)
    {
        int y;
        cin >> y ;
        if(y !=0)
            b.push_back(1);
        else
            b.push_back(0);
    }
    ll max1=0,max2=0,count1=0,count2=0;
    for(ll i=0; i<n; i++)
    {
        if(a[i]>=1)
        {
            count1++;
            max1=max(max1,count1);
        }
        else
            count1=0;
        if(b[i]>=1)
        {
            count2++;
            max2=max(max2,count2);
        }
        else
            count2=0;
    }
    if(max1>max2) cout<<"Om"<<endl;
    else if(max2>max1) cout<<"Addy"<<endl;
    else cout<<"Draw"<<endl;

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
