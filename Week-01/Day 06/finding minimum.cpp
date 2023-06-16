#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,k;
    cin >> n >> k;
    vector<long> arr(n);

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    long i=0,j=0;
    //vector<long> ans;

    while(i<n)
    {
        long x = LONG_MAX;

        for(long indx=i; indx < min(i+k, n); indx++)
        {
            x=min(x, arr[indx]);
            j = indx;
        }
        cout << x << " ";
        i=j;
        i++;
    }


    return 0;
}
