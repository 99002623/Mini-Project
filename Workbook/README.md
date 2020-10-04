# Commands
clear
g++ readCSV.cpp -c
g++ readCSV.cpp -o out
./out

g++ customerWallet.cpp walletTest.cpp -c         //--> Compile
g++ customerWallet.o walletTest.o -lgtest -lgtest_main -lpthread -o out      // Link
./out                   // exe

g++ customerWallet.cpp moneyRemittance.cpp moneyRem_test.cpp -c 
g++ customerWallet.o moneyRemittance.o moneyRem_test.o -lgtest -lgtest_main -lpthread -o out
./out 