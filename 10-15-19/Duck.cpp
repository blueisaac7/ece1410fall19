#include "Duck.hpp"

Duck::Duck() : Bird(BirdTypes::DUCK)
{

}

std::string Duck::speak(void)
{
  return "quack";
}

Duck* Duck::spawn(void)
{
  return new Duck();
}