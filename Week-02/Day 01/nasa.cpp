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
void find_all_palindromic(vector<ll> &pal)
{
    for(int i=0 ; i<(1<<15) ; i++)
    {
        if(is_palindrome(i))
        {
            pal.push_back(i);
        }
    }
}

void solve()
{
    ll n; cin >> n;
    vector<ll> pal;
    find_all_palindromic(pal);
    vector<ll> arr(n);
    unordered_map<ll,ll> cnt;
    for(ll i=0; i<n; i++)
    {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    ll ans=0;
    for(auto value : arr)
    {
        for(auto e : pal)
            ans += cnt[e^value];
        cnt[value]--;
    }
    cout << ans << endl;
    return;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // Write C++ code here
    ll t;
    cin>>t;

    while(t--)
    {
        solve();

    }

    return 0;
}
