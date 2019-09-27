#include <iostream>

#include "Number.hpp"

using namespace std;

int main()
{
    Number a(14);
    Number b(2);
    Number c = a + b;
    //Number d = a.operator+(b);

    Number d = a - b;

    cout << "C Value: " << c.getValue() << endl;
    cout << "D Value: " << d.getValue() << endl;

    return 0;
}