#include<iostream>
#include<cmath>
#include "point.h"

  Point::Point():m_x(0),m_y(0.0) {   
  }
  Point::Point(int x, int y) : m_x(x), m_y(y) {  
  }
  Point::Point(const Point& ref) :
        m_x(ref.m_x), m_y(ref.m_y) {

}
  void Point::display() const {
    std::cout << m_x << "," << m_y << "\n";
  }
  int Point::distanceFromOrigin() const {
    int d=sqrt((m_x*m_x)+(m_y*m_y));
    return d;
  }
  Quadrant Point::quadrant() const {
    if(m_x>0 && m_y>0)
    return Q1;
    if(m_x<0 && m_y>0)
    return Q2;
    if(m_x<0 && m_y<0)
    return Q3;
    if(m_x>0 && m_y<0)
    return Q4;
    if(m_x==0 && m_y==0)
    return Q1;
    
  }
    bool Point::isOrigin() const{
        if(m_x==0 && m_y==0)
        return true;
        else
        {
            return false;
        }
        
    }
  bool Point::isOnXAxis() const{
      if(m_x==0)
      {return true;
      }
      else
      {
          return false;
      }
      
  }
  bool Point::isOnYAxis() const{
      if(m_y==0)
      {return true;
      }
      else
      {
          return false;
      }
  }
};


