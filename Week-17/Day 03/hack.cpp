#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int w = arr[0][0] - 1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (w < arr[i][0])
                v.push_back(arr[i][1]);
        }
        sort(v.begin(), v.end(), greater<>());
        if (v.size() > 0 && v[0] == arr[0][1] && v[0] != v[1])
            cout << w << endl;
        else
            cout << "-1" << endl;
    }
}