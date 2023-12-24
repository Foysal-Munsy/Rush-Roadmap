#include <iostream>
#include <string>

int main()
{
    std::string binaryString = "011001100110"; // Input your binary string here
    int count = 0;
    size_t pos;

    while ((pos = binaryString.find("01")) != std::string::npos)
    {
        binaryString.erase(pos, 2);
        count++;
    }

    std::cout << "Modified binary string: " << binaryString << std::endl;
    std::cout << "Count of '01': " << count << std::endl;

    return 0;
}
