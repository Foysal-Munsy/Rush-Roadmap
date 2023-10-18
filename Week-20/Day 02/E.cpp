#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];

        long long res = 0;
        unordered_map<int, int> count;
        for (int i = 0, j = 0; i < N; i++)
        {
            count[A[i]]++;
            while (count.size() > 1)
            {
                count[A[j]]--;
                if (count[A[j]] == 0)
                    count.erase(A[j]);
                j++;
            }
            res += i - j + 1;
        }

        long long total = (long long)N * (N + 1) / 2;
        cout << "Case " << t << ": " << total - res << "\n";
    }

    return 0;
}
