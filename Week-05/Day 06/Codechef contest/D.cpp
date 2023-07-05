#include <iostream>
#include <stack>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        stack<int> st;
        long long ans = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == ':') {
                while (!st.empty()) {
                    ans += st.top();
                    st.pop();
                }
                st.push(0);
            } else if (S[i] == ')') {
                if (!st.empty()) {
                    st.top()++;
                }
            } else if (S[i] == '(') {
                st.push(0);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
