#include <iostream>
using namespace std;
void solve()
{
    int n,x;    cin >> n >> x;
    
    if(n&1)
    {
        n=(n/2)+1;
    }
    else
    {
        n=n/2;
    }
    if(x>=n) cout << "YES" << '\n';
    else cout << "NO" << '\n';
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
