#include "currency.h"
#include <gtest/gtest.h>
using namespace std;

TEST(Currency, EmptyConnstructor) 
{
    Currency C1;
    Currency C2;
    Currency C3 = (C1 + C2);
    
    EXPECT_EQ(0, C3.getrupees());
    EXPECT_EQ(0, C3.getpaise());
}

TEST(Currency, plus_with_without) 
{
    Currency C1(7,22);
    Currency C2(1,2);
    	
    Currency C3 = (C1 + C2);
    
    Currency C5 = (C1 + 5);
    	
    EXPECT_EQ(8, C3.getrupees());
	EXPECT_EQ(24, C3.getpaise());
	
	EXPECT_EQ(12, C5.getrupees());
	EXPECT_EQ(27, C5.getpaise());
	
}
    	
TEST(Currency, Preincrement) 
{
    Currency C1(7,22);
    
    Currency& C4 = ++C1;    	
    	
    EXPECT_EQ(8, C4.getrupees());
	EXPECT_EQ(23, C4.getpaise());
	
}

TEST(Currency, postincrement) 
{
	Currency C1(7,22);
    	    	
    Currency C3 = C1++;
    	
    EXPECT_EQ(7, C3.getrupees());
	EXPECT_EQ(22, C3.getpaise());
}
   
TEST(Currency, equals) 
{
	Currency C1(7,22);
    Currency C2(7,22);    	
      	
    EXPECT_EQ(1, (C1 == C2));
}
	
