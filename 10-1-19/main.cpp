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

    cout << "C Value: " << c << endl;
    cout << "D Value: " << d << endl;

    //cin >> d;

    return 0;
}