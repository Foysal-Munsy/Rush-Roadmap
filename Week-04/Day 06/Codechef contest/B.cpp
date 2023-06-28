#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, K, P;
        cin >> N >> X >> K >> P;
        int mana = P;
        if (K <= X) {
            mana += K * 10;
        } else {
            mana += X * 10 + (K - X) * 5;
        }
        if (K == N) {
            mana += 20;
        }
        cout << mana << endl;
    }
    return 0;
}
