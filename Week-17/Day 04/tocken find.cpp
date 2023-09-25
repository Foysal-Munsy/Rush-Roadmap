/*----------------------------*
 *   -----------------------   *
 *    Author: Foysal Munsy     *
 *    Date: 2023/09/25         *
 *    Time: 23:26:45           *
 *   -----------------------   *
 *-----------------------------*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl '\n'
bool isKeyword(const string &word)
{
    vector<string> keywords = {"int", "float", "void", "double", "bool"};
    for (const auto &keyword : keywords)
    {
        if (word == keyword)
            return true;
    }
    return false;
}
bool isOperator(const char c)
{
    vector<char> operators = {'+', '-', '*', '/', '=', '<', '>', '!'};
    for (const auto &op : operators)
    {
        if (c == op)
            return true;
    }
    return false;
}
bool isValidIdentifier(const string &word)
{
    if (!isalpha(word[0]) && word[0] != '_')
        return false;
    for (char c : word)
    {
        if (!isalnum(c) && c != '_')
            return false;
    }
    return true;
}

bool isPunctuator(const char c)
{
    vector<char> punctuators = {',', ';', '{', '}', '(', ')'};
    for (const auto &punctuator : punctuators)
    {
        if (c == punctuator)
            return true;
    }
    return false;
}

void solve()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    vector<string> keywords, validIdentifiers, invalidIdentifiers;
    vector<char> operators, punctuators;

    while (ss >> word)
    {
        if (isKeyword(word))
        {
            keywords.push_back(word);
        }
        else if (isValidIdentifier(word))
        {
            validIdentifiers.push_back(word);
        }
        else if (!isValidIdentifier(word))
        {
            invalidIdentifiers.push_back(word);
        }

        for (char c : word)
        {
            if (isOperator(c))
            {
                operators.push_back(c);
            }
            else if (isPunctuator(c))
            {
                punctuators.push_back(c);
            }
        }
    }

    cout << "Keywords: ";
    for (const auto &keyword : keywords)
        cout << keyword << ' ';
    cout << '\n';

    cout << "Valid Identifiers: ";
    for (const auto &identifier : validIdentifiers)
        cout << identifier << ' ';
    cout << '\n';

    cout << "Invalid Identifiers: ";
    for (const auto &identifier : invalidIdentifiers)
        cout << identifier << ' ';
    cout << '\n';

    cout << "Operators: ";
    for (const auto &op : operators)
        cout << op << ' ';
    cout << '\n';

    cout << "Punctuators: ";
    for (const auto &punctuator : punctuators)
        cout << punctuator << ' ';
    cout << '\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*-----Code By Foysal-----*/
    ll cs = 1;
    ll t = 1;
    // cin >> t;
    for (; t--;)
    {
        // cout << "#case " << cs << " :\n";
        solve();
        cs++;
    }
    return 0;
}