#include <gtest/gtest.h>

#include "BinarySearch.h"

#include <vector>

class BinarySearchTest : public ::testing::Test {
protected:
    virtual void SetUp() {}
    virtual void TearDown() {}
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
};

void BinarySearchTest::SetUpTestCase() {

}

void BinarySearchTest::TearDownTestCase() {

}

TEST_F(BinarySearchTest, UpperBound) {
    std::vector<int> data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
    auto it = UpperBound(data.begin(), data.end(), 4);
    auto step = std::distance(data.begin(), it);
    ASSERT_EQ(step, 10);
}

TEST_F(BinarySearchTest, Lowerbound) {
    std::vector<int> data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };
    auto it = Lowerbound(data.begin(), data.end(), 4);
    auto step = std::distance(data.begin(), it);
    ASSERT_EQ(step, 7);
}