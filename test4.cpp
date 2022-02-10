#include<iostream>
#include<gtest/gtest.h>

using namespace std;

class MyClass{
    private:
        string name;
    public:
        MyClass(string _name){
            this->name=_name;
        }
        string GetName(){
            return this->name;
        }
};

TEST(TestClass, TestGetter1){
    // Arrange
    MyClass object=MyClass("Obama");
    // Act 
    string name=object.GetName();
    // Assert
    ASSERT_EQ(name,"Obama");
}
TEST(TestClass, TestGetter2){
    // Arrange
    MyClass object=MyClass("Barak");
    // Act 
    string name=object.GetName();
    // Assert
    ASSERT_EQ(name,"Barak");
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}