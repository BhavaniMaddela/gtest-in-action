#include "StringCalculator.h"
#include <gtest/gtest.h>

class StringCalculatorFixture:public testing::Test{
protected:
    string input;
    int expectedValue;
    int actualValue;
};
class StringCalculatorParameterFixture:public StringCalculatorFixture,public testing::withparaminterface<tuple<string,int>>{
   void SetUp() override {
        input = std::get<0>(GetParam());
        expectedValue = std::get<1>(GetParam());
};

//paramater values
//INSTANTIATE_TEST_SUITE_P(name of collection,fixture with test param, testing::Values(make_tuple()));
INSTANTIATE_TEST_SUITE_P(ValidStringCalculatorInputs,StringCalculatorParameterFixture,testing::values(
  make_tuple("",0)
  make_tuple("0", 0),
  make_tuple("1", 1),
  make_tuple("1,2", 3),
  make_tuple("1,2,3", 6)
  
));

TEST_P(StringCalculatorParameterFixture,ParameterizedTest){
     // input= std::get<0>(GetParam());
      //expectedValue= std::get<1>(GetParam());
    Add(input);
      //actualValue=Add(input);
      //ASSERT_EQ(actualValue,expectedValue);
}
);
