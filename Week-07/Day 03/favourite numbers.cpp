#include <iostream>
using namespace std;
typedef long long ll;

void solve()
{
    int n;  cin >> n;
    if((n&1)==0 && (n%7)==0)
    {
        cout << "Alice" << '\n';
    }
    else if((n&1)==1 && (n%9)==0)
    {
        cout << "Bob" << '\n';
    }
    else cout << "Charlie" << '\n';
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
