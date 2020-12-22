#include "image.h"
#include <gtest/gtest.h>

TEST(Image,Empty_Cosnstructor) {
    Image I1;
    EXPECT_EQ(0, I1.getx());

}

TEST(Point,Parameterized_Cosnstructor) {
    Image I1(256,256,1064,1064);
    EXPECT_EQ(256, I1.getx());
}

TEST(Point,Copy_Cosnstructor) {
    Image I1(256,625,2048,2048);
    Image I2(I1);
    EXPECT_EQ(256, I1.getx());
}
