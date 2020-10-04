#ifndef _customerWallet_h
#define _customerWallet_h

#include <string>


class customerWallet{

protected:
std::string w_custName;
std::string w_mobNum;
double w_balance;

public:

// Constructer - Default and Parameterized Constructer
customerWallet();
customerWallet(std::string,std::string,double);

//virtual functions

virtual void credit(double);           //recharge or billPay
virtual void debit(double);


//Getters
std:: string getCustomerName();
std:: string getMobileNum();
double getWalletbal();
void display();

};   // Class defining end


#endif