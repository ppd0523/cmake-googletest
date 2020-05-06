#include <gtest/gtest.h>
#include <iostream>

#include "function.h"

TEST(MyExampleTest, first){
    std::cout<< "hello " << std::endl;
    EXPECT_EQ(3, sum(1,2));
    EXPECT_TRUE(true);
    EXPECT_TRUE(false);
}

TEST(MyExampleTest, second){
    EXPECT_FALSE(true);
    EXPECT_TRUE(print());
}
