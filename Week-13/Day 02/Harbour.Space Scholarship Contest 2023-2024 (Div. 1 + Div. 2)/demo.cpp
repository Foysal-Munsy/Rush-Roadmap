#include <iostream>
using namespace std;

int main()
{
    int initial_value = 100;
    int n = 4;
    for (int i = n; i > 0; i--)
    {
        // cout << initial_value << " + " << i << " = ";
        initial_value += i;
        cout << initial_value << endl;
    }
    return 0;
}
