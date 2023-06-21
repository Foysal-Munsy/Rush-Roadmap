#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> programs;
    for (int i = 0; i < N; i++)
    {
        string program;
        cin >> program;
        auto it = find(programs.begin(), programs.end(), program);
        if (it != programs.end())
        {
            programs.erase(it);
        }
        programs.insert(programs.begin(), program);
    }
    for (const auto& program : programs)
    {
        cout << program.substr(program.size() - 2) ;
    }
    return 0;
}
