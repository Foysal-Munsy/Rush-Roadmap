#include <bits/stdc++.h>
using namespace std;

bool check(double mid, int k, vector<int> &lengths)
{
    int pieces = 0;
    for (int i = 0; i < lengths.size(); i++)
    {
        pieces += (int)(lengths[i] / mid);
    }
    return pieces >= k;
}

double max_length(int n, int k, vector<int> &lengths)
{
    double low = 0;
    double high = *max_element(lengths.begin(), lengths.end());
    double ans = 0;

    while (high - low > 1e-7)
    { // precision up to 10^-6
        double mid = (low + high) / 2;
        if (check(mid, k, lengths))
        {
            ans = mid;
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return ans;
}

int main()
{
    vector<int> lengths = {802, 743, 457, 539};
    int n = 4;
    int k = 11;
    cout << max_length(n, k, lengths) << "\n";
    return 0;
}
