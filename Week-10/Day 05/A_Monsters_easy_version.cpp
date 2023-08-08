#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int ans = a[n - 1];
        for (int i = 0; i < n - 1; i++) {
            if(a[i]-1==0)
             ans += max(0, a[i] - 1);
        }
        cout << ans << endl;
    }
    return 0;
}
