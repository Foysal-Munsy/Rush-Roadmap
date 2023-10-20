#include <bits/stdc++.h>
using namespace std;
bool checkFunctionDeclaration(const string &line)
{
    size_t openParenthesis = line.find('(');
    size_t closeParenthesis = line.find(')');

    // Check if parentheses exist and are in the correct order
    if (openParenthesis == string::npos || closeParenthesis == string::npos || openParenthesis > closeParenthesis)
    {
        return false;
    }

    return true;
}

bool checkFunctionDefinition(const string &line)
{
    size_t openBrace = line.find('{');
    size_t closeBrace = line.find('}');

    // Check if braces exist and are in the correct order
    if (openBrace == string::npos || closeBrace == string::npos || openBrace > closeBrace)
    {
        return false;
    }

    return true;
}

int main()
{
    // Replace with your absolute file path
    string filePath = "/Users/mrfm/Documents/XPSC/Rush-Roadmap/Week-20/Day 07/input.txt";

    ifstream inputFile(filePath);
    string line;

    if (inputFile.is_open())
    {
        string declaration, definition;
        while (getline(inputFile, line))
        {
            declaration += line;
            if (line.find('{') != string::npos)
            {
                while (getline(inputFile, line))
                {
                    definition += line;
                    if (line.find('}') != string::npos)
                    {
                        break;
                    }
                }
                if (!checkFunctionDeclaration(declaration))
                {
                    cout << "Invalid function declaration.\n";
                    return 1;
                }
                if (!checkFunctionDefinition(definition))
                {
                    cout << "Invalid function definition.\n";
                    return 1;
                }
                declaration.clear();
                definition.clear();
            }
        }
        inputFile.close();
        cout << "Function declaration and definition are correct.\n";
    }
    else
    {
        cout << "Unable to open file.\n";
        return 1;
    }

    return 0;
}
