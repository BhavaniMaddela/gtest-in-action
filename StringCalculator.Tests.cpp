#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
string input="";
int expectedValue=0;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}

TEST(string_calculatorTestSuite,add_ZeroInputString_ZeroIsExpected){
//Arrange
string input="0";
int expectedValue=0;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}

TEST(string_calculatorTestSuite,add_two_comma_delimited_numbersString_SumIsExpected){
//Arrange
string input="1,2";
int expectedValue=3;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}

TEST(string_calculatorTestSuite,add_multiple_comma_delimited_numbersString_SumIsExpected){
//Arrange
string input="1,2,7";
int expectedValue=10;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}
 
