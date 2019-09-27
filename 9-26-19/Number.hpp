#ifndef NUMBER_HPP
#define NUMBER_HPP

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

#endif



