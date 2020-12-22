#ifndef __POINT_H
#define __POINT_H

enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};

class Point {
  int m_x;
  int m_y;

public:
  Point();
  Point(int x, int y);
  Point(const Point&);

  void display() const ;
  int distanceFromOrigin() const ;
  Quadrant quadrant() const;
  bool isOrigin() const;
  bool isOnXAxis() const;
  bool isOnYAxis() const;
 
};

#endif
