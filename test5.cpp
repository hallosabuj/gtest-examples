// Example of a test fixtures
#include<iostream>
#include<gtest/gtest.h>

using namespace std;

class MyClass{
    private:
        int value;
    public:
        MyClass(int value){
            this->value=value;
        }
        int Increment(int incrementFactor){
            return this->value+incrementFactor;
        }
};

struct MyClassTest:public testing::Test{
    MyClass *obj;
    void SetUp(){
        cout << "Alive" << endl;
        obj = new MyClass(100);
    }
    void TearDown(){
        cout << "Dead" << endl;
        delete(obj);
    }
};

// SetUp() and TearDown() are automatically called for every test fixtures
TEST_F(MyClassTest, TestIncBy5){
    // Act
    int value=obj->Increment(5);
    // Assert
    ASSERT_EQ(value,105);
}
TEST_F(MyClassTest, TestIncBy10){
    // Act
    int value=obj->Increment(10);
    // Assert
    ASSERT_EQ(value,110);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}