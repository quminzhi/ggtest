#include <gtest/gtest.h>
extern "C" {
#include "add.h"
}

// Define a test case
TEST(AddTest, AddFunction) {
  EXPECT_EQ(add(2, 3), 5);
  EXPECT_EQ(add(-1, 1), 0);
  EXPECT_EQ(add(0, 0), 0);
}
