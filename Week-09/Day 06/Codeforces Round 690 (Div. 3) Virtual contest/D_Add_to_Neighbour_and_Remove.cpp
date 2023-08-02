#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

ll polycarp_operation(vector<ll> &a) {
    ll n = a.size();
    ll count = 0;
    for (ll i = 0; i < n; i++) {
        if (i > 0 && i < n-1) {
            a[i-1] += a[i];
            a[i+1] += a[i];
        } else if (i == 0) {
            a[i+1] += a[i];
        } else if (i == n-1) {
            a[i-1] += a[i];
        }
        a.erase(a.begin() + i);
        n--;
        i--;
        count++;
    }
    return count;
}

void solve()
{
    ll n; cin >> n;
    vl v;   
    for (ll i = 0; i < n; i++)
    {
        ll x; cin >> x;
        v.push_back(x);
    }
    cout << polycarp_operation(v) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}
