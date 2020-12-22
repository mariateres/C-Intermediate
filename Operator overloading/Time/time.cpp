#include "time.h"
MyTime::MyTime():h(0),m(0){

}

MyTime::MyTime(int hval,int mval):h(hval),m(mval){
    
}
MyTime::MyTime(const MyTime& ref):h(ref.h),m(ref.m){

}
MyTime MyTime::operator+(const MyTime& ref){
    return MyTime(this->h+ref.h,this->m+ref.m);
}

MyTime MyTime::operator-(const MyTime& ref){
    return MyTime(this->h-ref.h,this->m-ref.m);
}

MyTime MyTime::operator++(){

    h++;
    m++;
    //MyTime temp(h,m);
    //return temp;
    return *this;

}
MyTime MyTime::operator++(int){
    MyTime temp(h,m);
    h++;
    m++;
    return temp;
}

bool MyTime::operator==(const MyTime& ref){
    return (this->h==ref.h && this->m==ref.m);

}


friend std::ostream& MyTime::operator<<(const std::ostream& rout, const MyTime& ref){
    return rout<<ref.h<<":"<<ref.m;
}

int MyTime::get_hour(){
    return h;
}
int MyTime::get_minute(){
    return m;
}