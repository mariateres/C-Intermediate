#include<iostream>
class MyTime {
int h;
int m;
public:
MyTime();
MyTime(int,int);
MyTime(const MyTime&);
MyTime operator+(const MyTime&);
MyTime operator-(const MyTime&);
//MyTime operator+(int);
//MyTime operator-(int);
MyTime operator++();
MyTime operator++(int);
//MyTime& operator+=(const MyTime&);
bool operator==(const MyTime&);
//operator<, operator>
void dispay() const;
int get_hour();
int get_minute();
friend std::ostream& operator<<(const
std::ostream&, const MyTime&);
//friend std::ostream& operator<<(std::ostream&, const Complex&);
};