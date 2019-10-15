#include "Duck.hpp"


std::string Duck::speak(void)
{
  return "quack";
}

Duck* Duck::spawn(void)
{
  return new Duck();
}