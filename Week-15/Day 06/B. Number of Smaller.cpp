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
    int N, M;
    cin >> N >> M;
    vector<int> A(N + 1), B(M + 1), C;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < M; i++)
        cin >> B[i];
    A[N] = 1e9, B[M] = 1e9;
    int i = 0;
    for (int j = 0; j < M; j++)
    {
        while (A[i] < B[j])
            i++;
        C.push_back(i);
    }
    for (auto ans : C) 
        cout << ans << " ";
    cout << nl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}