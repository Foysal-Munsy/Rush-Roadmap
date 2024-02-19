// #include <cstdlib>
// #include <ctime>
#include <bits/stdc++.h>
using namespace std;
std::vector<int> generate_random_numbers(int n, int N)
{
    srand(time(0));
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        numbers[i] = (rand() % N) + 1;
    }
    return numbers;
}
// #include <string>

std::string generate_string(int n)
{
    std::string result = "";
    for (int i = 0; i < n; i++)
    {
        result += (rand() % 2 == 0) ? 'L' : 'R';
    }
    return result;
}
// #include <iostream>

int main()
{
    int N = 5;
    std::vector<int> numbers = generate_random_numbers(N, N); // This will generate 10 random numbers between 1 and 20
    for (int number : numbers)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;                       // This will print a random number between 1 and 10
    std::cout << generate_string(N) << std::endl; // This will print a string of length 10 consisting of 'L' and 'R'
    cout << 3 % 5;
    return 0;
}
