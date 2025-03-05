#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include <string>

#include "calculator.h"

extern int run_app(int argc, char **argv);

TEST(RunAppTest, RunApp) {
  // Redirect std::cout to a stringstream
  std::stringstream buffer;
  std::streambuf *prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());

  run_app(1, nullptr);

  // Restore std::cout to its previous buffer
  std::cout.rdbuf(prevcoutbuf);

  // Check the output
  std::string expected_output = "add(10,4): 14\nsub(10,4): 6\nmul(10,4): "
                                "40\ndiv(10,4): 2\nmod(10,4): 2\n1\n";
  ASSERT_EQ(buffer.str(), expected_output);
}