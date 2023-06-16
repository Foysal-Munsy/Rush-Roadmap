#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int sum = (a*a) + (b*b);
    int c_sqr = c*c;

    if( sum < c_sqr)
        cout << "Yes" <<endl;
    else
        cout << "No" <<endl;

    return 0;
}
