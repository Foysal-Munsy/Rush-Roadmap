#include <iostream>
using namespace std;
#define     Code    ios_base::sync_with_stdio(false);
#define     By      cin.tie(nullptr);
#define     Foysal  cout.tie(NULL);

int min_increments(int A[], int N)
{
    int ans = 0;
    for (int i = 0; i < N - 2; i++)
    {
        int sum = A[i] + A[i + 1] + A[i + 2];

        if (sum % 3 != 0)
        {
            int inc = 3 - (sum % 3);
            A[i + 2] += inc;
            ans += inc;
        }
    }

    return ans;
}

int main()
{
    Code By Foysal
    /*----------*/

    int T;
    cin >> T;

    while (T--)
    {

        int N;
        cin >> N;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int ans = min_increments(A, N);

        cout << ans << endl;
    }
    return 0;
}
