#include<bits/stdc++.h>
using namespace std;

int max_free_days(int n, int d, vector<string> st)
{
    int maxDays = 0,curr_days = 0;
    //i-->track day, j--> track person
    for (int i = 0; i < d; i++)
    {
        bool is_all_free = true;
        for (int j = 0; j < n; j++)
        {
            if (st[j][i] == 'x')
            {
                is_all_free = false;
                break;
            }
        }
        if (is_all_free)
        {
            curr_days++;
        }
        else
        {
            maxDays = max(maxDays, curr_days);
            curr_days = 0;
        }
    }
    maxDays = max(maxDays, curr_days);
    return maxDays;
}

int main()
{
    int n, d;
    cin >> n >> d;
    vector<string> st(n);
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }

    int result = max_free_days(n, d, st);
    cout << result << '\n';
    return 0;
}
