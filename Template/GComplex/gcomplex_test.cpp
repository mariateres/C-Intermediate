#include "gcomplex.h"
#include "gtest/gtest.h"
#include "gcomplex.cpp"

TEST(Complex,EmptyConstructor)
{
    Complex <double> a;
    EXPECT_EQ(0.0,a.re());
    EXPECT_EQ(0.0,a.img());
}

TEST(Complex,ParameterizedConstructor)
{
    Complex <int> a(6,9);
    EXPECT_EQ(6,a.re());
    EXPECT_EQ(9,a.img());
}

