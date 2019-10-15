#ifndef ROBIN_HPP
#define ROBIN_HPP

#include "Bird.hpp"


class Robin : public Bird
{

  public:
    Robin* spawn(void)
    {
      return new Robin();
    }

};

#endif