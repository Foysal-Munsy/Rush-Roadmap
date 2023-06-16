#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef map<string,ll> map_s_ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
#define PI 3.14159265358979323846

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
//const int N=3;
void solve()
{
    ll n;
    cin >> n;

    map<string,ll> frq; //check elements frequency
    vs a[3];
    for(int i=0; i<3; i++)
    {
        a[i].resize(n);
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
            frq[a[i][j]]++;
        }
    }
    ll ans[3] = {0};
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(frq[a[i][j]] == 1)
                 ans[i] +=3;
            else if(frq[a[i][j]] == 2)
                 ans[i] +=1;
            else
                ans[i] +=0;
        }

    }
    for(int i=0; i<3; i++)
        cout << ans[i] << " ";
    cout << endl;
    return;


}
#define _Start_cpp_from_here_ ios_base::sync_with_stdio(false);cin.tie(nullptr);
int main()
{
    _Start_cpp_from_here_
    // Write C++ code here
    ll t;
    cin>>t;
    while(t--)
    {
        solve();

    }

    return 0;
}

