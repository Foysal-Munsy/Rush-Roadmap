#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int n;
        string t;
        cin >> n >> t;

        string s = "";
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && t[i + 1] == '0') {
                s += char((t[i] - '0') * 10 + (t[i + 1] - '0') + 'a' - 1);
                i++;
            } else {
                s += char(t[i] - '0' + 'a' - 1);
            }
        }

        cout << s << endl;
    }

    return 0;
}
