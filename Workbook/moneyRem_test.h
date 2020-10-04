#include "moneyRemittance.h"
#include <gtest/gtest.h>

TEST(MoneyRemittance, DefaultConstructor) {
  MoneyRemittance c1;
  EXPECT_EQ(0, c1.getCustomerName().length());
  EXPECT_EQ(0, c1.getMobileNum().length());
  EXPECT_EQ(0, c1.getCustomerID().length());
  EXPECT_EQ(0, c1.getWalletbal());
}


TEST(MoneyRemittance, ParametricConstructor) {
  MoneyRemittance c1("Mr.Abc","9901063456",1000);
  EXPECT_EQ(6, c1.getCustomerName().length());
  EXPECT_EQ(10, c1.getMobileNum().length());
  EXPECT_EQ(0, c1.getCustomerID().length());
  EXPECT_EQ(1000, c1.getWalletbal());
}

TEST(MoneyRemittance, ParametricConstructor1) {
  customerWallet c1("Mr.Abc","9901063456","989Add225",1000);
  EXPECT_EQ(6, c1.getCustomerName().length());
  EXPECT_EQ(10, c1.getMobileNum().length());
  EXPECT_EQ(9, c1.getCustomerID().length());
  EXPECT_EQ(1000, c1.getWalletbal());
}