#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"
#include <gtest/gtest.h>

class Circle : public IShape 
{
  double m_radius;

public:
  Circle():m_radius(1),IShape(0){}
  const double PI = 22.0/7.0;
  Circle(int r,int s1):m_radius(r),IShape(s1){}
  double area()
  {
    return (PI*m_radius*m_radius);
  }
  double circumference()
  {
    return (2*PI*m_radius);
  }
};

#endif

int main(int argc, char **argv)
{
  Circle c1;
  std::cout<<"circumference"<<c1.circumference()<<"\n";
  std::cout<<"area"<<c1.area()<<"\n";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  return 0;
}
