# Commands
clear
g++ readCSV.cpp -c
g++ readCSV.cpp -o out
./out

g++ customerWallet.cpp test.cpp -c         //--> Compile
g++ customerWallet.o test.o -lgtest -lgtest_main -lpthread -o out      // Link
./out                   // exe

g++ customerWallet.cpp moneyRemittance.cpp test.cpp -c 
g++ customerWallet.o moneyRemittance.o test.o -lgtest -lgtest_main -lpthread -o out
./out 

g++ customerWallet.cpp moneyRemittance.cpp transaction.cpp test.cpp -c 
g++ customerWallet.o moneyRemittance.o transaction.o test.o -lgtest -lgtest_main -lpthread -o out
./out 