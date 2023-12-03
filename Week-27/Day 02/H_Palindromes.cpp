//
// Created by Foysal Munsy on 02 / 12 / 2023
// Time: 19 : 54 : 39
//
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    map<char, char> m = {{'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'}, {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'}, {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'}, {'3', 'E'}, {'5', 'Z'}, {'8', '8'}};
    string s;
    while (cin >> s)
    {
        string r = s;
        reverse(r.begin(), r.end());
        bool p = (s == r);
        string t = s;
        for (auto &c : t)
            c = m[c];
        reverse(t.begin(), t.end());
        bool m = (s == t);
        cout << s << " -- is ";
        if (p && m)
            cout << "a mirrored palindrome.";
        else if (p)
            cout << "a regular palindrome.";
        else if (m)
            cout << "a mirrored string.";
        else
            cout << "not a palindrome.";
        cout << "\n\n";
    }
    return 0;
}
