#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        factors.push_back(n);
    return factors;
}

int longestSubarray(vector<int> &arr, int k)
{
    unordered_map<int, int> count;
    int start = 0, end = 0, len = 0;
    for (end = 0; end < arr.size(); end++)
    {
        vector<int> factors = primeFactors(arr[end]);
        for (int factor : factors)
            count[factor]++;
        while (count.size() > k)
        {
            vector<int> start_factors = primeFactors(arr[start]);
            for (int factor : start_factors)
            {
                if (--count[factor] == 0)
                    count.erase(factor);
            }
            start++;
        }
        len = max(len, end - start + 1);
    }
    return len;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int len = longestSubarray(A, K);
        cout << "Case " << t << ": " << len << endl;
    }
    return 0;
}
