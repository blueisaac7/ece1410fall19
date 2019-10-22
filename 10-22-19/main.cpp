#include <iostream>
#include <sstream>

int main (int argc, char** argv)
{
  std::cout << "Number of args: " << argc << std::endl;

  for (int i = 0; i < argc; ++i)
  {
    std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
  }


  std::stringstream outAndIn; 
  
  outAndIn << "Hello! " << 5435.643f << 't' << 325 << std::endl;

  std::string stuff;
  float something;

  outAndIn >> stuff;
  outAndIn >> something;
  
  std::cout << "Stuff: " << stuff << std::endl;
  std::cout << "Something: " << something << std::endl;

  std::cout << outAndIn.str();


  return 0;
}