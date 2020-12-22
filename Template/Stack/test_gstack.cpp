#include "gstack.h"
#include "gtest/gtest.h"
#include"gstack.cpp"


TEST(MyStack, Empty_Constructor) {
  MyStack<int> s1;
  EXPECT_EQ(true, s1.isEmpty());
  EXPECT_EQ(false, s1.isFull());
}

TEST(MyStack, Parametrized_Constructor) {
  MyStack<int> s1(5);
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  EXPECT_EQ(4, s1.pop());
  EXPECT_EQ(false, s1.isEmpty());
  EXPECT_EQ(false, s1.isFull());
  EXPECT_EQ(3, s1.peek());
  EXPECT_EQ(3, s1.pop());
  EXPECT_EQ(2, s1.peek());
}


