#include "time.h"
#include<gtest/gtest.h>
namespace{
    TEST(MyTime,empty_constructor){
        MyTime t1;
        EXPECT_EQ(0, t1.get_hour());
        EXPECT_EQ(0, t1.get_minute());
    }

    TEST(MyTime,parametrized_constructor){
        MyTime t1(1,2);
        EXPECT_EQ(1, t1.get_hour());
        EXPECT_EQ(2, t1.get_minute());
    }

    TEST(MyTime,copy_constructor){
        MyTime t1(1,2);
        MyTime t2(t1);
        EXPECT_EQ(1, t2.get_hour());
        EXPECT_EQ(2, t2.get_minute());
    }

    TEST(MyTime,addop){
        MyTime t1(3,4);
        MyTime t2(1,2);
        MyTime t3=t1+t2;
        EXPECT_EQ(4, t3.get_hour());
        EXPECT_EQ(6, t3.get_minute());
    }

    TEST(MyTime,subop){
        MyTime t1(3,4);
        MyTime t2(1,2);
        MyTime t3=t1-t2;
        EXPECT_EQ(2, t3.get_hour());
        EXPECT_EQ(2, t3.get_minute());
    }

    TEST(MyTime,preinc){
        MyTime t1(3,4);
        MyTime t3=++t1;
        EXPECT_EQ(4, t3.get_hour());
        EXPECT_EQ(5, t3.get_minute());
    }
    
    TEST(MyTime,postinc){
        MyTime t1(3,4);
        MyTime t3=t1++;
        EXPECT_EQ(3, t3.get_hour());
        EXPECT_EQ(4, t3.get_minute());
    }

}