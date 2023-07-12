#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
    int n;
    cin >> n;
    vector<int> a(n), d(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> d[i];

    unordered_map<int, int> freq;
    for (int x : a) freq[x]++;
    for (int x : d) freq[x]++;

    int max_freq = 0;
    for (auto p : freq) max_freq = max(max_freq, p.second);

    cout << max_freq << endl;
    }
    

    return 0;
}
