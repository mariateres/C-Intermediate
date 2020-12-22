#include "gpoint.h"
#include "gtest/gtest.h"
#include "gpoint.cpp"
TEST(Point,ParameterConstructor)
{
    Point <int> a(1,1);
    Point <int> b(-1,-1);
    Point <int> c(-1,1); 
    Point <int> d(1,-1);
    EXPECT_EQ(0,a.quadrant());
    EXPECT_EQ(2,b.quadrant());
    EXPECT_EQ(1,c.quadrant());
    EXPECT_EQ(3,d.quadrant());
}
