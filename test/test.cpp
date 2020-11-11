
#include "moneyRem_test.h"
#include "transTest.h"

#ifdef __CMAKE__        //Dependancies

#include "../src/customerWallet.cpp"
#include "../src/moneyRemittance.cpp"
#include "../src/transaction.cpp"

// add this following section or link -lgtest_main static library
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#endif
