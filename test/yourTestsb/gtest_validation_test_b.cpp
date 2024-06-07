// ######################################################################
// #                                                                    #
// #                           C++ Test File                            #
// #                                                                    #
// ######################################################################

/**
 * @file gtest_validation_test.cpp
 *
 * @brief Brief description of the file.
 *
 * @author XXXX
 * @date YYYY-MM-DD
 */

#include <gtest/gtest.h>

#include <nestedBottom.hpp>

namespace {

TEST(GtestFunctionalityValidationTest, GtestFunctionalityValidationTest) {
  Example::PrintHelloWorldC();
  ASSERT_EQ(1, 1);
}

}  // namespace

// ###########################  End of File  ############################
