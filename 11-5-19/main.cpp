#include <iostream>

using namespace std;

class Something
{
  public:
    Something()
    {

    }

    int getAt(int index)
    {
      return array[index];
    }

    int operator[] (int index)
    {
      return array[index];
    }

  private:
    int array[10];
};  


int main(void)
{
  Something s;

  s.getAt(5); 

  s[5];

  return 0;
}