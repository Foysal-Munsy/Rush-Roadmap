#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int f1= max(A,B);

    if(A==B)
        cout<< A+B <<endl;
    else
        cout << f1+f1-1<<endl;

    return 0;
}
