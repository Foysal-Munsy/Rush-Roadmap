#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=0;
    while(i<n)
    {
        for (int j = 0; j < n-i-1; j++) cout << " ";

        for (int j = 0; j < i*2+1; j++) cout << "*";

        cout << endl;
        i++;
    }

    i=n-1;
    while(i>=0)
    {
        for (int j = 0; j < n-i-1; j++) cout << " ";

        for (int j = 0; j < i*2+1; j++) cout << "*";

        cout << endl;
        i--;
    }
    return 0;
}

