#include <iostream>
#include <string>
using namespace std;
void solve()
{
    string s;   cin >> s;

    int start = 0,end = 2;
    string sub1 = s.substr(start, end);
    int n1 = stoi(sub1);

    start = 3,end = 3;
    string sub2 = s.substr(start, end);
    int n2 = stoi(sub2);

    if(n1<=12 && n2 <=12){cout << "BOTH\n";return;}
    if(n1<=12 && n2>12){cout << "MM/DD/YYYY\n";return;}
    if(n1>12 && n2<=12){cout << "DD/MM/YYYY\n";return;}
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
