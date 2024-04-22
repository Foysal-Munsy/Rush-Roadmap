#include <iostream>
#include <string>
using namespace std;

// class
class house
{
private:
    // member variable
    int length = 0, bredth = 0;

public:
    // member function
    void setData(int x, int y)
    {
        length = x;
        bredth = y;
    }
    void area()
    {
        cout << "The area of the house is: " << length * bredth << '\n';
    }
};

int main()
{
    house h1; // memory allocated

    h1.setData(300, 500);
    h1.area();
    return 0;
}