/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/20         *
 *    Time: 21:06:14           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
int minOperations(string S, string K)
{
    int n = S.size(), m = K.size();
    int minMove, moves, temp;
    for (int i = 0; i <= n - m; i++)
    {
        moves = 0;
        for (int j = i, l = 0; j < i + m; j++, l++)
        {
            temp = abs(S[j] - K[l]);
            if (temp > 5)
                temp = 5 - (temp - 5);
            moves += temp;
        }
        if (i == 0)
            minMove = moves;
        else if (moves < minMove)
            minMove = moves;
    }
    return minMove;
}
void solve()
{
    int N, M;
    cin >> N >> M;
    string S, K;
    cin >> S >> K;
    cout << minOperations(S, K) << nl;
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