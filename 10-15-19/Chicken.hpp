#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include <string>

#include "Bird.hpp"

class Chicken : public Bird
{
  public:
    std::string speak(void);
    Chicken* spawn(void);
};

#endif