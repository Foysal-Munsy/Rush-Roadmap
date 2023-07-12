#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(NULL);

    ll A, B, X, Y;
    cin >> A >> B >> X >> Y;
    ll messi_points = 2 * A + B;
    ll ronaldo_points = 2 * X + Y;
    if (messi_points > ronaldo_points) {
        cout << "Messi" << endl;
    } else if (ronaldo_points > messi_points) {
        cout << "Ronaldo" << endl;
    } else {
        cout << "Equal" << endl;
    }
    return 0;
}
