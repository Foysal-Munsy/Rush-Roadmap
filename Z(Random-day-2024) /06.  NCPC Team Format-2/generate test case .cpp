
#include <bits/stdc++.h>
std::string generate_random_string(int length)
{
    // All possible characters
    const std::string CHARACTERS = "abcdefghijklmnopqrstuvwxyz";

    std::random_device random_device;
    std::mt19937 generator(random_device());
    std::uniform_int_distribution<> distribution(0, CHARACTERS.size() - 1);

    std::string random_string;

    for (int i = 0; i < length; ++i)
    {
        random_string += CHARACTERS[distribution(generator)];
    }

    return random_string;
}

// Usage
int main()
{
    std::string str = generate_random_string(10);
    std::cout << str << std::endl;
    return 0;
}
