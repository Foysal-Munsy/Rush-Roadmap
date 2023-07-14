
//problemlink: https://www.codechef.com/problems/WATERFILLING
/*
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin >> t;
	
	while(t--)
	{
	    int a,b,c;  cin >> a >> b >> c;
    	// int ab= a & b ;
        // int ans = ab|c;
        int ans = (a & b) | c;
        //cout <<a <<" & "<<b << "="<<ab << " \t" << ab << " | " << c << "=" << ans << '\n';

    	if(ans) cout << "Not now" << '\n';
    	else cout << "Water filling time" << '\n';
    	
	}
	return 0;
	
}
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin >> t;
	
	while(t--)
	{
	    int a,b,c;  cin >> a >> b >> c;
    	int ans= a+b+c;
    	if(ans ==3 || ans == 2) cout << "Not now" << '\n';
    	else cout << "Water filling time" << '\n';
    	
	}
	return 0;
	
}
