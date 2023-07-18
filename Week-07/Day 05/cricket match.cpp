#include <iostream>
using namespace std;

void solve()
{
    int n,m;    cin >> n >> m;
    m = (m*6)*6;
    if(n<=m){cout << "YES\n";}
    else {cout << "NO\n";}
}
int main() {
	// your code goes here
	int t;  cin >> t;
	while(t--) solve();
	return 0;
}
