#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "polygon.h"
#include <cmath>
#include <gtest/gtest.h>

class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int x,int y,int z):m_a(x),m_b(y),m_c(z){}
  double area() 
  {
    int s;
    s=(m_a+m_b+m_c)/2;
    return sqrt((s*(s-m_a)*(s-m_b)*(s-m_c)));
  }
  double circumference()
  {
    return m_a+m_b+m_c;
  }
};

#endif

int main(int argc, char **argv)
{
  Triangle c1(3,4,5);
  std::cout<<"circumference"<<c1.circumference()<<"\n";
  std::cout<<"area"<<c1.area()<<"\n";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  return 0;
}
