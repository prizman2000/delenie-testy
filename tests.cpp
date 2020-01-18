#include "gtest/gtest.h"
#include "lib.h"

TEST(correct, expectedCorrectWork) {

    EXPECT_EQ(delit("20","4"), 5);

    EXPECT_EQ(delit("-46","4"), -11);

    EXPECT_EQ(delit("0","334"), 0);
}

TEST(incorrect, expectedinCorrectWork) {

    EXPECT_THROW(delit("","4"), std::range_error);

    EXPECT_THROW(delit("-46",""), std::range_error);

    EXPECT_THROW(delit("0","0"), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
