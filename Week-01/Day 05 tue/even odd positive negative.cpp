#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int x[n+1];

    for(int i=0; i<n; i++)
    {
        cin>> x[i];
    }
    int even=0, odd=0, positive=0, negative=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]%2==0)
            even++;
        if(x[i]%2!=0)
            odd++;
        if(x[i]>0)
            positive++;
        if(x[i]<0)
            negative++;
    }
    cout << "Even: "<< even << endl;
    cout << "Odd: "<< odd << endl;
    cout << "Positive: "<< positive << endl;
    cout << "Negative: "<< negative << endl;


    return 0;
}
