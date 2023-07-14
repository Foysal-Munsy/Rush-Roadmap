//problem link: https://www.codechef.com/problems/ONEFULPAIRS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b;    cin >> a >> b;
	int ans = a + b +(a*b);
	if(ans == 111) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return 0;
}

