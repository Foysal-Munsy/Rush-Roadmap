#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, sum = 0;
    double avg;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        sum += a;
    }
    avg = ((double)sum / n);
    cout << fixed << setprecision(12) << avg << "\n";
    return 0;
}