#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        bool possible = true;
        for (int i = 0; i < N; i++) {
            if (M - A[i] + 1 < K) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        bool possible = true;
        for (int i = 0; i < N; i++) {
            if (M - A[i] + 1 < K) {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
