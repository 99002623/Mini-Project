#ifndef _trans_h
#define _trans_h

#include "moneyRemittance.h"
//#include <list>
#include <fstream>    //file handling
#include <string>     // srtring data
#include <bits/stdc++.h>   //stl containers
//#include <cstdlib>



class Transaction {
//bool r_flag;

std::list <MoneyRemittance> l_mrCust; //= importDataset("bankDatabase.csv");

public:

double r_accBal = 0;
double r_wBal = 0;


void addCustomer(std::string,std::string,std::string,std::string,std::string,std::string,double);
MoneyRemittance parseData(std::string line);
void importDataset(std::string fileName);

bool sendMoney(std::string,double);    // Customer Number and Amount
bool withdrawMoney(std::string,double);

//double updatedBalance(std::string);
//double walle
};








#endif
