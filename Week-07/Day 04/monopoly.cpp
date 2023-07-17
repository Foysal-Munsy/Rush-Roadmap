#include <iostream>
using namespace std;
void solve()
{
    int p, q, r, s;
    cin >> p >> q >> r >> s;
    if (p > q + r + s || q > p + r + s || r > p + q + s || s > p + q + r) 
        cout << "YES\n";
    else 
        cout << "NO\n";
}
int main() {
	// your code goes here
	int t;  cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
