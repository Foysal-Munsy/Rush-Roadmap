/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void test()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n), b(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        sum += a[i];
    }
    // cout << sum << nl;
    bool flag = true;
    for (; flag;)
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % x == 0)
            {
                sum += b[i];
                a[i] /= x;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    cout << sum << nl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        test();
        cs++;
    }
    return 0;
}