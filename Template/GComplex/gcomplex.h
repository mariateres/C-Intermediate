#ifndef __GCOMPLEX_H
#define __GCOMPLEX_H

template<class T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
  T re();
  T img();
};

#endif

