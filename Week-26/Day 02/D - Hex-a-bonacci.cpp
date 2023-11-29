//
// Created by Foysal Munsy on 26 / 11 / 2023
// Time: 00 : 58 : 05
//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define nl '\n'
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;

int a, b, c, d, e, f;
int fn(int n)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    if (n == 2)
        return c;
    if (n == 3)
        return d;
    if (n == 4)
        return e;
    if (n == 5)
        return f;
    return fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6);
}
int main()
{
    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}