#include "complex.h"

Complex::Complex():m_real(0),m_imag(0){}
Complex::Complex(int real,int imag):m_real(real),m_imag(imag){}
Complex::Complex(int value):m_real(value),m_imag(value){}

Complex Complex::operator+(const Complex& c3)
{
    return Complex(this->m_real+c3.m_real,this->m_imag+c3.m_imag);
}
Complex Complex::operator-(const Complex& c3)
{
    return Complex(this->m_real-c3.m_real,this->m_imag-c3.m_imag);
}
//PRE INCREMENT
Complex& Complex::operator++()
{
    this->m_real++;
    this->m_imag++;
    return *this;
}
//POST INCREMENT
Complex Complex::operator++(int)
{
    Complex temp(*this);
    this->m_real++;
    this->m_imag++;
    return temp;

}
bool Complex::operator==(const Complex& c3)
{
    return ((this->m_real==c3.m_real)&&(this->m_imag==c3.m_imag));
}
void Complex::dispay() const
{
    std::cout<<"complex number "<< m_real<<"+i"<<m_imag<<"\n";
}
std::ostream& operator<<(const std::ostream& cout , const Complex& c3)
{
    return cout<<c3.m_real<<"+i"<<c3.m_imag<<"\n";
}
int main()
{
    Complex c1(2,3);
    c1.dispay();
    Complex c2(1,3);
    Complex c3=c1+c2;
    c3.dispay();
    std::cout<<"\n"<<(c1==c2);
    std::cout<<(c1);
}
