#include <bits/stdc++.h>
using namespace std;
int N;
int A[2 << 17];
int cnt[2 << 17];
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
        if (A[0] > N)
        {
            cout << "NO\n";
            continue;
        }
        for (int i = 0; i <= N; i++)
            cnt[i] = 0;
        for (int i = 0; i < N; i++)
            cnt[A[i]]++;
        for (int i = N; i--;)
            cnt[i] += cnt[i + 1];
        bool same = true;
        for (int i = 0; i < N; i++)
            if (A[i] != cnt[i + 1])
                same = false;
        cout << (same ? "YES\n" : "NO\n");
    }
}
