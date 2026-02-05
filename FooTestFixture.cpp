#include <gtest/gtest.h>
#include "math_utils.h"

// Define a fixture class
class MathFixture : public ::testing::Test {
protected:
    int x;
    int y;

    // Runs before each test
    void SetUp() override {
        x = 10;
        y = 5;
    }

    // Runs after each test
    void TearDown() override {
        // Optional cleanup
    }
};

// Use TEST_F instead of TEST
TEST_F(MathFixture, AddTest) {
    EXPECT_EQ(add(x, y), 15);
}

TEST_F(MathFixture, MultiplyTest) {
    EXPECT_EQ(multiply(x, y), 50);
}
