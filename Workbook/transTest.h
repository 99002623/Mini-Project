#ifndef _transTest_h
#define _transTest_h

#include "transaction.h"
#include <gtest/gtest.h>

TEST(Transaction, sendMoney) {

Transaction t1;

t1.addCustomer("Mr.Abc","9900112205","989Add225","100010001","SBI","SBIN00041152",5000);

bool t_flag = t1.sendMoney("9900112205",500);

  EXPECT_EQ(true, t_flag);
  EXPECT_EQ(5500,t1.updatedBalance("9900112205"));
 
}


TEST(Transaction, withdrawMoney) {

Transaction t1;

t1.addCustomer("Mr.Abc","9900112205","989Add225","100010001","SBI","SBIN00041152",5000);

bool t_flag = t1.withdrawMoney("9900112205",500);

  EXPECT_EQ(true, t_flag);
  EXPECT_EQ(4500,t1.updatedBalance("9900112205"));
 
}




#endif