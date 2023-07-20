#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

void solve()
{ 
    int n;
    cin>>n;
    if(n%10<5)
    {
        cout<<100-(10*(n/10))<<nl;
    }
    else
    {
        cout<<100-(10 * ((n/10)+1))<<nl;
    }


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}