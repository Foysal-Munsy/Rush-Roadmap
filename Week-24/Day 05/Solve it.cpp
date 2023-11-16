//
// Created by Foysal Munsy on 14 / 11 / 2023
// Time: 19 : 28 : 58
//
#include <bits/stdc++.h>
using namespace std;

double p, q, r, s, t, u;

double f(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

double bisection()
{
    double a = 0, b = 1;
    for (int i = 0; i < 30; i++)
    {
        double c = (a + b) / 2;
        if (f(a) * f(c) <= 0) // diff
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
    return (a + b) / 2;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> p >> q >> r >> s >> t >> u)
    {
        if (f(0) * f(1) > 0) // same sign
        {
            cout << "No solution" << '\n';
        }
        else
        {
            cout << fixed << setprecision(4) << bisection() << '\n';
        }
    }
    return 0;
}
