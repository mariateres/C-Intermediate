#include "rectangle.h"
#include <gtest/gtest.h>

TEST(Rectangle, Empty_Cosnstructor) {
    Rectangle B1(1,2);
  EXPECT_EQ(2, B1.area());
}
TEST(Rectangle, Cosnstructor) {
    Rectangle B1(2,3);
  EXPECT_EQ(6, B1.area());
}