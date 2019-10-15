#include <iostream>

using namespace std;


int main()
{
  int i = 9;
  int* p = &i;
  int* j = new int;

  //j = p;

  cout << "i: " << i << endl;
  cout << "&i: " << &i << endl;

  cout << "*p: " << *p << endl;
  cout << "p: " << p << endl;

  cout <<"sizeof(p): " << sizeof(p) << endl;

  cout << "j: " << j << endl;

  delete j;

  int a[10] = {0};

  cout << "&a: " << &a << endl;

  p = a;

  cout << "p: " << p << endl;

  p[5] = 99;

  for (int b = 0; b < 10; ++b)
  {
    cout << "a[" << b << "]: " << a[b] << endl;
  }





  return 0;
}