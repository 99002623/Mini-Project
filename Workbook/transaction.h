#ifndef _trans_h
#define _trans_h

#include "moneyRemittance.h"
#include <list>
//#include "importDataset.h"

class Transaction {

std::list <MoneyRemittance> l_mrCust ;//= importDataset("bankDatabase.csv");

public:

void addCustomer(std::string,std::string,std::string,std::string,std::string,std::string,double);


bool sendMoney(std::string,double);    // Customer Number and Amount
bool withdrawMoney(std::string,double);

double getupdatedBalance(std::string);
//double walle
};






#endif