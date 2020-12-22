#include "customer.h"
#include<gtest/gtest.h>
namespace{
    TEST(Customer,getBalance){
        Customer c1("1","silpa","9846241285",400.0,Prepaid);
        EXPECT_EQ(400.0, c1.getBalance());
    }
    TEST(Customer,credit){
        Customer c1("1","silpa","9846241285",400.0,Prepaid);
        c1.credit(300.0);
        EXPECT_EQ(700.0, c1.getBalance());
    }
    TEST(Customer,makecall){
        Customer c1("1","silpa","9846241285",400.0,Prepaid);
        c1.makeCall(3);
        EXPECT_EQ(370.0, c1.getBalance());
    }

}