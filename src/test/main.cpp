
#include <gtest/gtest.h>


// TODO (AT): Remove this later
//  This is only for setting up the framework and making sure it builds
TEST(GoogleTest, Test)
{
    ASSERT_EQ(1,1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}