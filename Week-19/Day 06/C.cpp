#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll i = 0, j = n - 1, k = 1, count = 0, nai = 0;

    while (i <= k and k < arr.size())
    {
        if (arr[i] + arr[k] < a)
        {
            nai++;
            k++;
        }
        else
            break;
    }

    while (i <= j)
    {
        if ((arr[i] + arr[j]) <= b)
        {
            count += (j - i);
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << ((count - nai) >= 0 ? count - nai : 0) << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        cout << "Case " << cs << ": ";
        solve();
        cs++;
    }
    return 0;
}