#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum < a[i])
        {
            b.push_back(a[i]);
            sum += a[i];
        }
    }
    cout << n - b.size() << endl;
    for (int i = 0; i < n; i++)
    {
        if (!binary_search(b.begin(), b.end(), a[i]))
        {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
