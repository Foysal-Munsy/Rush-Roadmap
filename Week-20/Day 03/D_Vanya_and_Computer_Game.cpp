#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int &ai : a)
        cin >> ai;

    vector<int> rez;
    int cntx = 0, cnty = 0;
    while (cntx < x || cnty < y)
    {
        if ((long long)(cntx + 1) * y > (long long)(cnty + 1) * x)
        {
            cnty++;
            rez.push_back(2);
        }
        else if ((long long)(cntx + 1) * y < (long long)(cnty + 1) * x)
        {
            cntx++;
            rez.push_back(1);
        }
        else
        {
            cntx++;
            cnty++;
            rez.push_back(3);
            rez.push_back(3);
        }
    }

    for (int ai : a)
    {
        ai--;
        int tmp = rez[ai % (x + y)];
        if (tmp == 1)
            cout << "Vanya\n";
        else if (tmp == 2)
            cout << "Vova\n";
        else
            cout << "Both\n";
    }

    return 0;
}
