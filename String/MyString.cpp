#include <cstring>
#include <iostream>
#include <string>
//friend std::ostream& operator<< (const std::ostream& , const MyString& );
class MyString {
char *m_buf;
int m_len;
public:
MyString() : m_buf(nullptr), m_len(0) {}
MyString(const char *pbuf) 
{
    m_len = strlen(pbuf);
    m_buf = new char[m_len + 1];
    strcpy(m_buf, pbuf);
}
MyString(const MyString &ref) : m_len(ref.m_len) 
{
    m_buf = new char[m_len + 1];
    strcpy(m_buf, ref.m_buf);
}
~MyString() 
{
    if (m_len > 0) // m_buf != nullptr
        delete[] m_buf;
}
MyString &operator=(const MyString &ref) 
{
    if(this == &ref) 
        return *this;
//self assignment check
    if(m_buf!=nullptr) 
    {
        delete[] m_buf;
        m_len = ref.m_len;
        m_buf = new char[m_len + 1];
        strcpy(m_buf, ref.m_buf);
    }
    return *this;
}
/*MyString& operator+(MyString& ref)
{
        *this = *this + ref;
        return *this;
}*/
MyString& operator+=(const MyString& ref)
{
        *this+=ref;
        return *this;
}

friend std::ostream& operator<< (const std::ostream& os, const MyString& s)
{
	return os << s;
	
}

int length() const 
{ 
    return m_len; 
}
void display() const 
{
    std::cout << m_buf << "\n";
}

};
int main() {
    MyString s1("abcdxyz");
    s1.display();
    std::cout << "length: " << s1.length() << "\n";
    MyString s2(s1);
    s2.display(); 
    MyString s3;
    s3 = s1;
    s3.display(); 
    MyString s4("hello");
    s4 = s1;
    s4.display();
/*s1 = s1;
MyString s1("abcd");
s3 = s1 + s2;
s4 = s1 + "xyz";
s3 == s2;*/
    s1+="1234";
/*s2 = "hello";
s1 < s2
s1 > s1*/
    //std::cout << s1;
//std::cin >> s2;
    s1.display();
    return 0;
}
/*//self assignment
TODO : Overload other
operators in MyString class
*/