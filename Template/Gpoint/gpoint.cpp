#include"gpoint.h"
#include<iostream>
#include<math.h>
using namespace std;

  template<class T>
  Point<T>::Point():m_x(0),m_y(0)
  {
  }
  template<class T>
  Point<T>::Point(T x,T y):m_x(x),m_y(y)
  {
  }
  template<class T>
  void Point<T>::distanceFromOrigin()
  {
      return sqrt((pow(m_x,2))+(pow(m_y,2)));
  }
  template<class T>
  Quadrant Point<T>::quadrant()
  {
      if (m_x>0 &&m_y>0)
        {
            return Q1;
        }
        if (m_x<0 &&m_y<0)
        {
            return Q3;
        }
        if (m_x>0 &&m_y<0)
        {
            return Q4;
        }
        if (m_x<0 &&m_y>0)
        {
            return Q2;
        }

  }
  template<class T>
  void Point<T>::display()
  {
      cout<<m_x<<m_y;
  }

