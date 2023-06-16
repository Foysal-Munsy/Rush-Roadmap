#include <bits/stdc++.h>
using namespace std;
long long factorial(long long n)
{
    if(n==0)
        return 1;

    return n*factorial(n-1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // Write C++ code here
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        long long n;
        cin >> n;

        for(int i=1; i<=t; i++)
            factorial(n);
        cout << factorial(n) << endl;
    }
    return 0;
}
