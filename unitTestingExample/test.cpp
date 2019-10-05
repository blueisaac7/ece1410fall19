#include "gtest.h"

#include "Number.hpp"

TEST(Number, Add)
{
  Number a(9);

  EXPECT_EQ(10, a.add(1));
}

TEST(Number, BadAdd)
{
  Number a(9);

  EXPECT_TRUE(true);
}


int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
