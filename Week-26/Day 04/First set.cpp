#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

unordered_map<string, vector<string>> grammar = {
    {"E", {"TE'"}},
    {"E'", {"+TE'", "#"}},
    {"T", {"FT'"}},
    {"T'", {"*FT'", "#"}},
    {"F", {"(E)", "id", "a", "b"}}};

set<char> first(string symbol)
{
    set<char> firstSet;
    if (grammar.find(symbol) == grammar.end())
    {
        firstSet.insert(symbol[0]);
    }
    else
    {
        for (auto &production : grammar[symbol])
        {
            if (grammar.find(string(1, production[0])) == grammar.end())
            {
                firstSet.insert(production[0]);
            }
            else
            {
                set<char> tempFirst = first(string(1, production[0]));
                firstSet.insert(tempFirst.begin(), tempFirst.end());
            }
        }
    }
    return firstSet;
}

int main()
{
    for (auto &rule : grammar)
    {
        set<char> firstSet = first(rule.first);
        cout << "First(" << rule.first << ") = { ";
        auto it = firstSet.begin();
        cout << *it;
        ++it;
        while (it != firstSet.end())
        {
            cout << " , " << *it;
            ++it;
        }
        cout << "}\n";
    }
    return 0;
}
