/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/22         *
 *    Time: 22:10:07           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'

void solve()
{
    int K, N, M;
    cin >> K >> N >> M;
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    for (int i = 0; i < M; i++)
        cin >> B[i];

    int i = 0, j = 0;
    vector<int> ans;
    ans.reserve(N + M);
    while (i < N or j < M)
    {
        if (i < N and A[i] <= K)
        {
            ans.push_back(A[i]);
            if (A[i] == 0)
                K++;
            i++;
        }
        else if (j < M and B[j] <= K)
        {
            ans.push_back(B[j]);
            if (B[j] == 0)
                K++;
            j++;
        }
        else
        {
            break;
        }
    }
    if (ans.size() < N + M)
        cout << "-1\n";
    else
    {
        for (auto i : ans)
            cout << i << " ";
        cout << nl;
    }
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