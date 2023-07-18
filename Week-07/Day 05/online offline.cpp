#include <iostream>
using namespace std;
void solve()
{
    double on,off; cin >> on >> off;

    double percentage=0;

    percentage = 0.1 * on; 
    on = on- percentage;
    


    if(on < off) {cout << "ONLINE\n";return;}
    else if(on==off){cout << "EITHER\n";return;}
    else if(on > off){cout << "DINING\n";return;}
}
int main() {
	// your code goes here
	int t;  cin >> t;
	while(t--) solve();
	return 0;
}
