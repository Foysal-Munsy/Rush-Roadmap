/********************
 *   -------------   *
 *   Author:Foysal   *
 *   -------------   *
 ********************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

// USING TWO POINTER METHOD (linear time complexity)
void solve()
{
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N + 1), B(M + 1), C(N + M);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < M; i++)
        cin >> B[i];
    A[N] = 1e9, B[M] = 1e9;
    // time complexity is O(n) where n= N+M;
    int i = 0, j = 0, k = 0;
    while (i < N or j < M)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            j++;
            k++;
        }
    }
    for (auto sort : C)
        cout << sort << " ";
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