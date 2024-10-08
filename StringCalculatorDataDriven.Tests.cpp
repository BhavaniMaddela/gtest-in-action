#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <vector>

class TestDataPair{

public:
   string input;
   int  expectedValue
  TestDataPair(String_input, int _expectedValue) : input{_input}, expectedValue{_expectedValue}{
   }
};

TEST(StringCalculatorDataDrivenTestSuite,DataDrivenTestCase){
  vector<TestDataPair> datalist;
  TestDataPair Pair_one{"",0};
  TestDataPair Pair_two{"0",0};
  TestDataPair Pair_three{"1",1};
  TestDataPair Pair_four{"1,2",3};
  TestDataPair Pair_five{"1,2,3",6};

  dataList.push_back(pair_one);
  dataList.push_back(pair_two);
  dataList.push_back(pair_three);
  dataList.push_back(pair_four);
  dataList.push_back(pair_five);

//Iterate using a range-based for-loop
  for(TestDataPair DataPair : datalist){
   int actualValue=Add(datapair,input);
ASSERT_EQ(actualValue,datapair.expectedValue);
