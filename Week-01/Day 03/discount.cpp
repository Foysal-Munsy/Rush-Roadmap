#include <bits/stdc++.h>
using namespace std;

int main()
{
    int op, dp;
    cin>> op >> dp;

    double discount = ((op-dp)/double(op))*100;

    cout << discount << endl;


    return 0;
}
