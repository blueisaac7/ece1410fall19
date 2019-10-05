#ifndef NUMBER_HPP
#define NUMBER_HPP

#include <iostream>

using namespace std;


class Number
{
    public:
        Number(int value);  

        Number operator + (Number otherNumber); // Method formally known as add
        Number operator - (Number otherNumber);

        int getValue();  
        
    private:
        int value;
};

//ostream& operator << (ostream& out, Number value);

#endif



