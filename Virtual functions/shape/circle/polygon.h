#ifndef __POLYGON_H
#define __POLYGON_H

#include"shape.h"

class Polygon:public IShape {
  int m_sides;
  public:
  Polygon():m_sides(0){}
  Polygon(int sides):m_sides(sides){}
  //Polygon(int n):m_sides(n){}   //no.of sides
};

#endif
