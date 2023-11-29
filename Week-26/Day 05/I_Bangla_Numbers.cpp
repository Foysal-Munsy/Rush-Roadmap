#include <bits/stdc++.h>
using namespace std;

void print(long long n, string s)
{
    if (n > 0)
        cout << " " << n << " " << s;
}

void solve(long long n)
{
    print((n / 10000000) % 100, "kuti");
    print((n / 100000) % 100, "lakh");
    print((n / 1000) % 100, "hajar");
    print((n / 100) % 10, "shata");
    print(n % 100, "");
}

int main()
{
    long long n;
    int cs = 1;
    while (cin >> n)
    {
        printf("%4d.", cs++);
        if (n == 0)
        {
            cout << " 0";
        }
        else
        {
            solve(n / 1000000000000);
            print(n % 1000000000000 / 10000000, "kuti");
            solve(n % 10000000);
        }
        cout << "\n";
    }
    return 0;
}
