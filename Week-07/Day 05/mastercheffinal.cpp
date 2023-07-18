#include <iostream>
using namespace std;
void solve()
{
    int n;  cin >> n;
    if(n<=10) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
	// your code goes here
	int t;  cin >> t;
	while(t--) solve();
	return 0;
}
