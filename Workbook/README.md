# Commands
clear
g++ readCSV.cpp -c
g++ readCSV.cpp -o out
./out

g++ customerWallet.cpp walletTest.cpp -c         //--> Compile
g++ customerWallet.o walletTest.o -lgtest -lgtest_main -lpthread -o out      // Link
./out                   // exe

