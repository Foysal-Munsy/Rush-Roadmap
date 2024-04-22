#include <iostream>
#include <random>
#include <ctime>

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::mt19937 rng(time(0));                    // Mersenne Twister random number generator
    std::uniform_int_distribution<int> uni(1, n); // uniform distribution between 1 and n

    int random_number = uni(rng);

    std::cout << "Random number between 1 and " << n << ": " << random_number << std::endl;

    return 0;
}
