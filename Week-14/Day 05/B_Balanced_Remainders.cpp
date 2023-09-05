/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    vector<int> c(3); // reminder count
    for (int i = 0; i < n; i++)
        c[a[i] % 3]++;

    int ans = 0;
    // // c[1,1,4]
    // c[0] = 3, c[1] = 1, c[2] = 2;

    for (; c[0] != c[1] or c[1] != c[2];) // jokhon c0 !=c1 !=c2
    {
        // 1./mx_idx = 2 //min-idx=0
        // new c = [2,1,3]
        // 2./ mx-idx = 2,min-idx=1
        int max_idx = max_element(c.begin(), c.end()) - c.begin(); // max element er first occurenece er index
        int min_idx = min_element(c.begin(), c.end()) - c.begin(); // same as min
        c[max_idx]--;
        // 1./c[2]-- means 4--=3;
        // 2./ c[2]-- ==> 3-- = 2;

        c[(max_idx + 1) % 3]++;
        // 1./c[2+1 % 3]++ --> c[3%3]--> c[0]++ =1++ =2
        //  new c = [2,1,3] ->[3,1,2] --> [2,2,2]

        ans++;
    }

    cout << ans << nl;
}
void test()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    vector<int> c(3);
    for (int i = 0; i < n; i++)
        c[a[i] % 3]++;

    int ans = 0;

    for (; c[0] != c[1] or c[1] != c[2];)
    {
        int max_idx = max_element(c.begin(), c.end()) - c.begin();
        int min_idx = min_element(c.begin(), c.end()) - c.begin();

        c[max_idx]--;
        c[(max_idx + 1) % 3]++;
        ans++;
    }
    cout << ans << nl;
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
        // solve();
        test();
        cs++;
    }
    return 0;
}