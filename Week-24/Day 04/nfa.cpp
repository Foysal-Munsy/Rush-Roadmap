#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //(a|b)*abb
    string reg;
    cin >> reg;
    cout << "Given regular expression: " << reg << "\n";
    vector<vector<vector<int>>> q = {
        {{0, 1}, {0}}, // q0 ---a--> q0,q1 and q0--b-->q0;
        {{}, {2}},     // q1--b-->q2
        {{}, {3}},     // q2--b-->q3
        {{}, {}}       // q3 ....
    };

    cout << "\n\tTransition Table \n";
    cout << "_____________________________________\n";
    cout << "Current State |\tInput |\tNext State";
    cout << "\n_____________________________________\n";
    for (int i = 0; i < q.size(); i++)
    {
        if (!q[i][0].empty())
        {
            cout << "\n  q[" << i << "]\t      |   a   |  ";
            for (int state : q[i][0])
                cout << "q[" << state << "] ";
        }
        if (!q[i][1].empty())
        {
            cout << "\n  q[" << i << "]\t      |   b   |  ";
            for (int state : q[i][1])
                cout << "q[" << state << "] ";
        }
    }
    cout << "\n_____________________________________\n";
    return 0;
}
