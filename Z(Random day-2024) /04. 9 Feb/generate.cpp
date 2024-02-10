#include <iostream>
#include <fstream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main()
{
    std::ofstream testFile("testCases.txt");
    srand(time(0)); // seed for random number generator

    int n = 8; // replace with your value of n

    // Generate 100 test cases
    for (int i = 0; i < n; i++)
    {
        // Generate a random number between 1 and n
        // int randomNumber = rand() % n + 1;
        int randomNumber = rand() % (2 * n + 1) - n;
        testFile << randomNumber << std::endl;
    }

    testFile.close();
    std::cout << "Test cases generated in testCases.txt file." << std::endl;
    return 0;
}
