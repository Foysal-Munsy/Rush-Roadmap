#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        long long int x, sum;
        if(r>=l)
        {
            x = r-l+1;
            sum = (x*1.0/2)*(2*l+(x-1));
        }
        else
        {
            x = l-r+1;
            sum = (x*1.0/2)*(2*r+(x-1));
        }
        cout << sum << endl;
    }

    return 0;
}
