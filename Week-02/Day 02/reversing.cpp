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
    ll n; cin >> n;
    vl arr(n);
    for(ll i=0; i<n; i++)
        cin >> arr[i];

    for(ll i=0; i<n; i++)
    {
        if(arr[i] == 0)
            reverse(arr.begin(), arr.begin()+i);
//        cout << "After reversing from 0 to " << i << ": ";
//            for(ll j=0; j<n; j++)
//                cout << arr[j] << " ";
//            cout << endl;
    }
    for(ll i=0; i<n; i++)
        cout << arr[i] << " ";
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

//    }

    return 0;
}
