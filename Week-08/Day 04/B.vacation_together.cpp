#include <iostream>
#include <vector>
#include <string>
using namespace std;

int maxFreeDays(int N, int D, vector<string> schedules)
{
    int maxDays = 0;
    int curr_days = 0;
    for (int day = 0; day < D; day++)
    {
        bool allFree = true;
        for (int person = 0; person < N; person++)
        {
            if (schedules[person][day] == 'x')
            {
                allFree = false;
                break;
            }
        }
        if (allFree)
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
    int N, D;
    cin >> N >> D;
    vector<string> schedules(N);
    for (int i = 0; i < N; i++)
    {
        cin >> schedules[i];
    }
    cout << maxFreeDays(N, D, schedules) << endl;
    return 0;
}
