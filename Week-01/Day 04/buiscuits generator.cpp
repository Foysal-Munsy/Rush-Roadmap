#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,T;
    cin >> A >> B >> T;
   // float t= T+0.5;
    int sum =0;
//    for(int i=A; i<t; i+=A)
//    {
//        sum+=B;
//    }
    sum =(T/A)*B;
    cout << sum;
    return 0;
}
