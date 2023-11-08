#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    // Perform the operation for each query
    for (int j = 0; j < q; ++j)
    {
        int k;
        cin >> k;
        b = a;                                // Copy the original array
        unordered_map<int, int> mp_copy = mp; // Copy the original map

        // Replace all b[i] values with their count for k times
        for (int l = 0; l < k; ++l)
        {
            for (int i = 0; i < n; ++i)
            {
                b[i] = mp_copy[b[i]];
            }
            mp_copy.clear();
            for (int i = 0; i < n; ++i)
            {
                mp_copy[b[i]]++;
            }

            // If b doesn't change after the operation, break the loop
            if (a == b)
            {
                break;
            }
        }

        // Print the modified array for this query
        for (int i = 0; i < n; ++i)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
