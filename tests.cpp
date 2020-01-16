#include "gtest/gtest.h"
#include "lib.h"

TEST(correct, expectedCorrectWork) {

    EXPECT_EQ(delit("20","4"), 5);

    EXPECT_EQ(delit("-46","4"), -11);

    EXPECT_EQ(delit("0","334"), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
