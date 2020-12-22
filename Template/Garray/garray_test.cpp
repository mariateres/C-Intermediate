#include "garray.h"
#include "gtest/gtest.h"
#include "garray.cpp"

TEST(MyArray,ParameterConstructor)
{
    MyArray <int> a(4);
    a.append(4);
    a.append(4);
    a.append(4);
    a.append(4);
    EXPECT_EQ(16,a.sum());
}
