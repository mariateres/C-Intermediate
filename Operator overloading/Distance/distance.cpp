
#include "distance.h"
Distance::Distance():feet(0),inch(0){

}
Distance::Distance(int f,int i):feet(f),inch(i){

}
Distance::Distance(const Distance& obj):feet(obj.feet),inch(obj.inch){
}

Distance Distance::operator+(const Distance& obj){
    return Distance(this->feet+obj.feet,this->inch+obj.inch);
}
Distance Distance::operator-(const Distance& obj){
    return Distance(this->feet-obj.feet,this->inch-obj.inch);
}
Distance& Distance::operator++(){
    this->feet++;
    this->inch++;
    return *this;
}
Distance Distance::operator++(int){
   Distance d(feet,inch);
   this->feet++;
   this->inch++;
   return d;
}


bool Distance::operator==(const Distance& obj);
{
    return (this->feet==obj.feet && this->inch==obj.inch);
}


bool Distance::operator<(const Distance& obj){
    return (this->feet<obj.feet && this->inch<obj.inch);
}
bool Distance::operator>(const Distance& obj){
    return (this->feet>obj.feet && this->inch>obj.inch);
}

int getfeet() const{
    return feet;
}
int getinch() const{
    return inch;
}


void Distance::dispay() const
{
   std::cout<<feet<<inch;
}
//friend std::ostream& Distance::operator<<(const std::ostream&, const Distance&);