#include <iostream>
#include<vector>
using namespace std;
void solve()
{
    int n;  cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;  cin >> x;
        v.push_back(x);
    }
    bool flag = true;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((v[j] - v[i]) == (v[k] - v[j]))
                {
                    flag = false;
                    break;
                }
            }
        }
    }
            if (flag)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        int main()
        {
            // your code goes here
            int t;  cin >> t;
    while(t--)
    {
        solve();
    }
	return 0;
}

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         bool apFree = true;
//         unordered_set<int> s;
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 int diff = 2 * a[j] - a[i];
//                 if (s.find(diff) != s.end()) {
//                     apFree = false;
//                     break;
//                 }
//             }
//             if (!apFree) break;
//             s.insert(a[i]);
//         }
//         if (apFree) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }
//     return 0;
// }

