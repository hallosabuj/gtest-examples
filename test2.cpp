#include<iostream>
#include<gtest/gtest.h>

using namespace std;

// Adding test
TEST(TestName1,Subtest_1){
    ASSERT_TRUE(1==1);
    cout<<"After assertion"<<endl;
}
TEST(TestName1,Subtest_2){
    ASSERT_TRUE(1==2);
    cout<<"After assertion"<<endl;
}
TEST(TestName1,Subtest_3){
    ASSERT_EQ(1,1);
    cout<<"After assertion"<<endl;
}
TEST(TestName1,Subtest_4){
    ASSERT_EQ(1,2);
    cout<<"After assertion"<<endl;
}
TEST(TestName1,Subtest_5){
    EXPECT_EQ(1,1);
    cout<<"After assertion"<<endl;
}
TEST(TestName1,Subtest_6){
    EXPECT_EQ(1,2);
    cout<<"After assertion"<<endl;
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}