#include <iostream>
#include "customerWallet.h"

//--> Custrocter defination
customerWallet::customerWallet():
w_custName(""),
w_mobNum(""),
w_custID(""),
w_balance(0)
{}

customerWallet::customerWallet(std::string name,std::string mobNum,double bal):
w_custName(name),
w_mobNum(mobNum),
w_custID(""),
w_balance(bal)
{}

customerWallet :: customerWallet(std::string name,std::string mobNum,std::string id,double bal):
w_custName(name),
w_mobNum(mobNum),
w_custID(id),
w_balance(bal)
{}

void customerWallet::loadWallet(double amt){
    w_balance += amt ;
}

void customerWallet::drawWallet(double amt){
     w_balance -= amt ;
}
// Credit and debit are the virtual functions which is updated by the services from the wallet provider
/*
// Virtual function
void customerWallet:: credit(double amt)
{
w_balance += amt ;
}


void customerWallet:: debit(double amt)
{
w_balance -= amt ;
}*/


//getters
std:: string customerWallet::  getCustomerName(){
    return w_custName;
}

std:: string customerWallet:: getMobileNum(){
    return w_mobNum;
}

std:: string customerWallet:: getCustomerID(){
    return w_custID;
}

double customerWallet:: getWalletbal(){
    return w_balance;
}

/*
void customerWallet::display(){
    std::cout << "Customer Name :" + w_custName << std::endl;
    std::cout << "Customer Number :" + w_mobNum << std::endl;
    std::cout << "Wallet Balance available :" << w_balance << std::endl;
}*/

