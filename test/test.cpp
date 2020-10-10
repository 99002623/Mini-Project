
#include "moneyRem_test.h"
#include "transTest.h"

//#define _cmake_
#define _commands_

#ifdef _cmake_          //Dependancies

#include "../src/customerWallet.cpp"
#include "../src/moneyRemittance.cpp"
#include "../src/transaction.cpp"

#endif


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/*
#include <iostream>
#include "../src/transaction.h"

using namespace std;

int main(){

Transaction t1;
t1.importDataset("bankDatabase.csv");
t1.showCustomers();
bool t_flag = t1.sendMoney("9900112205",1000);
cout << t_flag << endl;

}*/