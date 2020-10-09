#ifndef _mrTest_h
#define _mrTest_h

#include "moneyRemittance.h"
#include <gtest/gtest.h>

TEST(MoneyRemittance, DefaultConstructor) {
  MoneyRemittance c1;
  EXPECT_EQ(0, c1.getCustomerName().length());
  EXPECT_EQ(0, c1.getMobileNum().length());
  EXPECT_EQ(0, c1.getCustomerID().length());
  EXPECT_EQ(0, c1.getWalletbal());
  //EXPECT_EQ(0, c1.getWalletbal());
}

TEST(MoneyRemittance, ParametricConstructor1) {
  MoneyRemittance c1("Mr.Abc","9901063456","989Add225","100010001","SBI","SBIN00041152",5000);
  EXPECT_EQ(6, c1.getCustomerName().length());
  EXPECT_EQ(10, c1.getMobileNum().length());
  EXPECT_EQ(9, c1.getCustomerID().length());
  EXPECT_EQ("100010001",c1.getAccNumber());
  EXPECT_EQ("SBI",c1.getBankName());
  EXPECT_EQ("SBIN00041152",c1.getIfscCode());
  EXPECT_EQ(0, c1.getWalletbal());
  EXPECT_EQ(5000, c1.getAccBalance());
}


TEST(MoneyRemittance, CreditTest) {  // Account Credit Test

MoneyRemittance c1("Mr.Abc","9901063456","989Add225","100010001","SBI","SBIN00041152",5000);
customerWallet *w_ptr = &c1;

w_ptr->loadWallet(1000);  //Load Wallet
w_ptr->credit(500);   // Dynamic binding
EXPECT_EQ(1000, w_ptr->getWalletbal());
EXPECT_EQ(5500, c1.getAccBalance());

}


TEST(MoneyRemittance, CreditTest1) {  // Account Credit Test

MoneyRemittance c1("Mr.Abc","9901063456","989Add225","100010001","SBI","SBIN00041152",5000);
customerWallet *w_ptr = &c1;
MoneyRemittance *c_ptr = dynamic_cast<MoneyRemittance*>(w_ptr);  // pointer down casting

c_ptr->loadWallet(1000);
c_ptr->credit(500);
EXPECT_EQ(1000, c_ptr->getWalletbal());
EXPECT_EQ(5500, c_ptr->getAccBalance());

}


TEST(MoneyRemittance, DebitTest) {  // Account Credit Test

MoneyRemittance c1("Mr.Abc","9901063456","989Add225","100010001","SBI","SBIN00041152",5000);
customerWallet *w_ptr = &c1;
//w_ptr->loadWallet(1000);  //Load Wallet
w_ptr->debit(500);   // Dynamic binding
EXPECT_EQ(500, w_ptr->getWalletbal());
EXPECT_EQ(4500, c1.getAccBalance());

}

TEST(MoneyRemittance, DebitTest1) {  // Account Credit Test

MoneyRemittance c1("Mr.Abc","9901063456","989Add225","100010001","SBI","SBIN00041152",5000);
customerWallet *w_ptr = &c1;
MoneyRemittance *c_ptr = dynamic_cast<MoneyRemittance*>(w_ptr);  // pointer down casting

c_ptr->debit(500);
EXPECT_EQ(500, c_ptr->getWalletbal());
EXPECT_EQ(4500, c_ptr->getAccBalance());

}

#endif