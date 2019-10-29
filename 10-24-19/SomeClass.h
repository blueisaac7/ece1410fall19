#ifndef GUARD
#define GUARD

#include <cmath>
#include <sstream>

#include "Something.h"

class Shape
{
  public:
    Shape();

    virtual std::string print() = 0;
};


class Point : public Shape
{
  public:
    Point(float x, float y)
    {
      this->x = x; 
      this->y = y;
    }

    float getX()
    {
      return x;
    }

    float getY()
    {
      return y;
    }


    std::string print()
    {
      std::stringstream out;

      out << "Point: [4.0]";

      return out.str();
    }
  protected:
    float x;
    float y;
};


class Circle : public Point
{
  public:
    Circle(float x, float y, float r) : Point(x, y)
    {
      this->r = r;
    }

    float getArea()
    {
      return M_PI * r * r;
    }

    std::string print()
    {
      std::stringstream out;

      out << Point::print() << "; Point"
    }

  protected:
    float r;
};

class Cylinder : public Circle
{
  public:
    Cylinder(float x, float y, float r, float h) : Circle(x, y, r)
    {
      this->h = h;
    }

    float getArea()
    {

    }

  private:
    float h;
};

#endif