#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<int> upper, lower;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                s[i] = ' ';
                if (!lower.empty())
                {
                    s[lower.back()] = ' ';
                    lower.pop_back();
                }
                continue;
            }
            if (s[i] == 'B')
            {
                s[i] = ' ';
                if (!upper.empty())
                {
                    s[upper.back()] = ' ';
                    upper.pop_back();
                }
                continue;
            }
            if ('a' <= s[i] && s[i] <= 'z')
            {
                lower.push_back(i);
            }
            else
            {
                upper.push_back(i);
            }
        }
        for (char c : s)
        {
            if (c != ' ')
                cout << c;
        }
        cout << "\n";
    }
    return 0;
}
