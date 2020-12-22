#ifndef __COLOR_H
#define __COLOR_H

typedef enum {
  RED=0xFF0000,
  GREEN=0x00FF00,
  BLUE=0x0000FF,
  WHITE=0xFFFFFF,
  BLACK=0x0
  //TODO: some more colors
}colour_t;

class Colour {
  int m_r;
  int m_g;
  int m_b;
  public:
  Colour();
  Colour(int,int,int);       //r,g,b values
  Colour(int);               //Hex value as int
 // Colour(std::string);       //Hex value as string
  //Colour(colour_t);           //enum
  void invert();
  void display() const;

};

#endif

