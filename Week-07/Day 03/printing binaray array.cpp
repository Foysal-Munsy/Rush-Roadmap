#include <iostream>
#include<vector>
using namespace std;
void solve()
{
    int n;  cin >> n;
    std::vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;  cin >> x;
        if(x==0) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << '\n';
    
    
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
