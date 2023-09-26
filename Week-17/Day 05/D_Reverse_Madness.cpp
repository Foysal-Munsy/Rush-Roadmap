/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/26         *
 *    Time: 22:18:41           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int N, K;
string S;
int L[2 << 17], R[2 << 17];
vector<int> X[2 << 17];
void solve()
{
    // input
    cin >> N >> K >> S;
    for (int i = 0; i < K; i++)
        cin >> L[i], L[i]--;
    for (int i = 0; i < K; i++)
        cin >> R[i];
    for (int i = 0; i < K; i++)
        X[i].clear();
    int Q;
    cin >> Q;
    // operation
    for (; Q--;)
    {
        int x;
        cin >> x;
        x--;
        int id = upper_bound(L, L + K, x) - L;
        id--;
        assert(0 <= id && id < K);
        X[id].push_back(min(x - L[id], R[id] - x - 1));
    }
    for (int i = 0; i < K; i++)
    {
        sort(X[i].begin(), X[i].end());
        int len = R[i] - L[i];
        int xi = 0;
        for (int l = 0; l < len / 2; l++)
        {
            while (xi < X[i].size() && X[i][xi] == l)
                xi++;
            if (xi % 2 == 1)
                swap(S[L[i] + l], S[R[i] - 1 - l]);
        }
    }
    cout << S << "\n";
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
