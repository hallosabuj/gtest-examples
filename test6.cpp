#include<iostream>
#include<gtest/gtest.h>

using namespace std;

// Function to calculate factorial on n
int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

TEST(TestFactorial, Test_1){
    // Arrange 
    int n=1;
    // Act
    int result=factorial(n);
    // Assert
    ASSERT_EQ(result,1);
}