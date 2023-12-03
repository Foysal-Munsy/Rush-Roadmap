#include <iostream>
#include <string>
using namespace std;

void print(long long n, string unit)
{
    if (n > 0)
        cout << " " << n << " " << unit;
}

void solve(long long n)
{
    print(n / 10000000, "kuti");
    n %= 10000000;
    print(n / 100000, "lakh");
    n %= 100000;
    print(n / 1000, "hajar");
    n %= 1000;
    print(n / 100, "shata");
    n %= 100;
    if (n > 0)
        cout << " " << n;
}

int main()
{
    long long n;
    int test_case = 1;
    while (cin >> n)
    {
        cout << "   " << test_case << ".";
        if (n == 0)
            cout << " 0";
        else
            solve(n);
        cout << endl;
        test_case++;
    }
    return 0;
}
