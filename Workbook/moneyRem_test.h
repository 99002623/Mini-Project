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
  MoneyRemittance c1("Mr.Abc","9901063456","989Add225",1000);
  EXPECT_EQ(6, c1.getCustomerName().length());
  EXPECT_EQ(10, c1.getMobileNum().length());
  EXPECT_EQ(9, c1.getCustomerID().length());
  EXPECT_EQ(1000, c1.getWalletbal());
}

/*
TEST(MoneyRemittance, CreditTest) {
  MoneyRemittance c1("Mr.Abc","9901063456",1000);
  c1.credit(500);
  EXPECT_EQ(500, c1.getWalletbal());
}*/

TEST(MoneyRemittance, CreditTest) {
customerWallet *w_ptr;
MoneyRemittance c1("Mr.Abc","9901063456",1000);
w_ptr = &c1;

w_ptr->credit(500);   // Dynamic binding
EXPECT_EQ(500, w_ptr->getWalletbal());

}


TEST(MoneyRemittance, DebitTest) {
  MoneyRemittance c1("Mr.Abc","9901063456",1000);
  c1.debit(500);
  EXPECT_EQ(1500, c1.getWalletbal());
}


