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
#define _Start_cpp_from_here_ ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define double_loop for(ll i=0; i<n; i++){for(ll j=0; j<n; j++){}};
bool is_palindrome(int n)
{
    string str = to_string(n);

    for(int i=0,j=str.size()-1 ; i<=j ; i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }

    return true;
}
void solve()
{
    ll S, T;
    cin >> S >> T;
    ll count = 0;
    for (ll a = 0; a <= S; a++)
    {
        for (ll b = 0; b <= S-a; b++)
        {
            for (ll c = 0; c <= S-a-b; c++)
            {
                if (a*b*c <= T) count++;
            }
        }
    }
    cout << count << endl;
    return;

}
int main()
{
    _Start_cpp_from_here_
    /*-----------------*/
//    ll t;
//    cin>>t;
//    while(t--)
//    {
    solve();
//
//    }


    return 0;
}
