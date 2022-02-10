#include<iostream>
#include<gtest/gtest.h>

using namespace std;

// Adding test
TEST(TestName1,Subtest_1){
    ASSERT_TRUE(1==1);
}
TEST(TestName1,Subtest_2){
    ASSERT_TRUE(1==2);
}
TEST(TestName2,Subtest_1){
    ASSERT_FALSE(1==1);
}
TEST(TestName2,Subtest_2){
    ASSERT_FALSE(1==2);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}