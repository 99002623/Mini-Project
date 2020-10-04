#include <iostream>
#include "customerWallet.h"

//--> Custrocter defination
customerWallet::customerWallet():
w_custName(""),
w_mobNum(""),
w_balance(0)
{}


customerWallet::customerWallet(std::string name,std::string mobNum,double bal):
w_custName(name),
w_mobNum(mobNum),
w_balance(bal)
{}

// Virtual function
void customerWallet:: credit(double amt)
{
w_balance += amt ;
}


void customerWallet:: debit(double amt)
{
w_balance -= amt ;
}


//getters
std:: string customerWallet::  getCustomerName(){
    return w_custName;
}

std:: string customerWallet:: getMobileNum(){
    return w_mobNum;
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

