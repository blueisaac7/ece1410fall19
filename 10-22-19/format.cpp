#include <iostream>
#include <iomanip>


std::string fun()
{
  std::cout << std::ios::fixed;
  std::cout << std::setprecision(1) << "A float: " << 3.14159f << std::endl;


}