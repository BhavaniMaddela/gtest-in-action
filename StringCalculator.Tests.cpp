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
TEST(string_calculatorTestSuite,passed_a_delimiterString_SumIsExpected){
//Arrange
string input="//;\n1;2";
int expectedValue=3;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}
TEST(string_calculatorTestSuite,when_delimited_with_newline_and_commaString_SumIsExpected){
//Arrange
string input="1\n2,3";
int expectedValue=6;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}
TEST(string_calculatorTestSuite,when_passed_multicharacter_delimiterString_SumIsExpected){
//Arrange
string input="//[***]\n8***2***3";
int expectedValue=13;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);

}

TEST(string_calculatorTestSuite,passed_multiple_delimitersString_SumIsExpected){
//Arrange
string input="//[*][%]\n4*2%3";
int expectedValue=9;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}
 
}
TEST(string_calculatorTestSuite,passed_multiple_multicharacter_delimitersString_SumIsExpected){
//Arrange
string input="//[**][%^]\n4**1%^9";
int expectedValue=14;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}
TEST(string_calculatorTestSuite,when_passed_numbers_over_1000String_SumIsExpected){
//Arrange
string input="//46,1001,3";
int expectedValue=49;
//Act
int actualValue=Add(input);
//Assert
ASSERT_EQ(actualValue,expectedValue);
 
}
TEST(string_calculatorTestSuite,passed_negative_numbersString_InvalidargumentIsExpected){
//Arrange
string input="-3";
//Act

//Assert
ASSERT_THROW(Add(input),invalid_argument);

}
 
