#include "point.h"
#include <gtest/gtest.h>
namespace {
TEST(Point,DefaultConstructor) {
    Point a1;
    EXPECT_EQ(0,a1.distanceFromOrigin());
    EXPECT_EQ(Q1,a1.quadrant());
    EXPECT_EQ(true,a1.isOrigin());
    EXPECT_EQ(true,a1.isOnXAxis()());
    EXPECT_EQ(true,a1.isOnYAxis()());
}
TEST(Point,ParameterizedConstructor) {
     Point a1(1,1);
    EXPECT_EQ(1.414,a1.distanceFromOrigin());
    EXPECT_EQ(Q1,a1.quadrant());
    EXPECT_EQ(false,a1.isOrigin());
    EXPECT_EQ(false,a1.isOnXAxis()());
    EXPECT_EQ(false,a1.isOnYAxis()());

}
TEST(Point,CopyConstructor) {
    Point a1(1,1);
    Point a2(a1);
    EXPECT_EQ(1.414,a1.distanceFromOrigin());
    EXPECT_EQ(Q1,a1.quadrant());
    EXPECT_EQ(false,a1.isOrigin());
    EXPECT_EQ(false,a1.isOnXAxis()());
    EXPECT_EQ(false,a1.isOnYAxis()());
}
}
