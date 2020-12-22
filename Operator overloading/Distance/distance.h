#include<iostream>
class Distance {
int feet;
int inch;
public:
Distance();
Distance(int,int);
Distance(const Distance&);
Distance operator+(const Distance&);
Distance operator-(const Distance&);
Distance operator+(int);
Distance operator-(int);
Distance& operator++();
Distance operator++(int);
bool operator==(const Distance&);
bool operator<(const Distance&);
bool operator>(const Distance&);
int getfeet() const;
int getinch() const;
void dispay() const;
//friend std::ostream& operator<<(const
//std::ostream&, const Distance&);
};