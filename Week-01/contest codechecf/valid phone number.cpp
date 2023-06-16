#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int multi = n*x;
        int countt = 0;
        while(multi != 0)
        {
            countt++;
            multi /=10;
        }
        if( countt == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}
