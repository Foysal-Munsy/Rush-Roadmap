#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b, c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b.push_back(a[i]);
        } else {
            c.push_back(a[i]);
        }
    }
    if (b.size() == 0 || c.size() == 0) {
        cout << -1 << endl;
        return 0;
    }
    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
