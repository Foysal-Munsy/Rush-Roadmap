#include <bits/stdc++.h>
using namespace std;
int N;
string A[3000];
int L[2][3001], R[2][3001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (; T--;)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int now = 0;
        for (int j = 0; j <= N; j++)
            L[now][j] = R[now][j] = 0;
        int ans = 0;
        for (int i = 0; i < N; i++)
        {
            int ch = 0;
            int nxt = 1 - now;
            for (int j = 0; j < N; j++)
            {
                ch ^= L[now][j] ^ R[now][j];
                if (ch)
                    A[i][j] ^= 1;
            }
            for (int j = 0; j < N; j++)
                if (A[i][j] == '1')
                {
                    ans++;
                    L[now][j] ^= 1;
                    R[now][j + 1] ^= 1;
                }
            for (int j = 0; j <= N; j++)
                L[nxt][j] = R[nxt][j] = 0;
            for (int j = 0; j <= N; j++)
            {
                if (L[now][j])
                    L[nxt][max(j - 1, 0)] ^= 1;
                if (R[now][j])
                    R[nxt][min(j + 1, N)] ^= 1;
            }
            now = nxt;
        }
        cout << ans << "\n";
    }
}