/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/17         *
 *    Time: 13:28:19           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int N;
    cin >> N;
    vector<ll> A(N), B(N);
    for (auto &i : A)
        cin >> i;
    for (auto &i : B)
        cin >> i;

    int max_gcd = 0;
    set<ll> s;
    for (int i = 0; i < N; i++)
    {
        vector<ll> C = A;
        C[i] = B[i];
        int gcd = C[0];
        for (int j = 1; j < N; j++)
        {
            gcd = std::gcd(gcd, C[j]);
            s.insert(gcd);
        }
    }
    ll max_element = *s.rbegin();
    cout << max_element << nl;
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
        solve();
        cs++;
    }
    return 0;
}