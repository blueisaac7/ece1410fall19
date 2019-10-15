#ifndef DUCK_HPP
#define DUCK_HPP

#include "Bird.hpp"

class Duck : public Bird
{
  public:
    Duck();
    std::string speak(void);
    Duck* spawn(void);
};

#endif