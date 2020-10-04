#include "moneyRemittance.h"
#include <gtest/gtest.h>


TEST(MoneyRemittance, DefaultConstructor) {
  MoneyRemittance c1;
  EXPECT_EQ(0, c1.getCustomerName().length());
  EXPECT_EQ(0, c1.getMobileNum().length());
  EXPECT_EQ(0, c1.getCustomerID().length());
  EXPECT_EQ(0, c1.getWalletbal());
}


TEST(customerWallet, DefaultConstructor) {
  MoneyRemittance c1;
  EXPECT_EQ(0, c1.getCustomerName().length());
  EXPECT_EQ(0, c1.getMobileNum().length());
  EXPECT_EQ(0, c1.getCustomerID().length());
  EXPECT_EQ(0, c1.getWalletbal());
}



int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}