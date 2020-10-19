#ifndef _trans_h
#define _trans_h

#include "moneyRemittance.h"
#include <list>
#include <string>
#include <vector>
#include <fstream>    //file handling
#include <bits/stdc++.h>   //stl containers


using namespace std;

class Transaction {


list <MoneyRemittance> l_mrCust; //= importDataset("bankDatabase.csv");

public:

double r_accBal = 0;
double r_wBal = 0;



void addCustomer(string,string,string,string,string,string,double);
void addCustomer(vector<string> data);

void importDataset(string fileName);

MoneyRemittance* findCustomer(const string &);    // return pointer for class for fast


void sendMoney(const string &,double);    // Customer Number and Amount
void withdrawMoney(const string &,double);

void showCustomers();

//double updatedBalance(std::string);
//double walle
};








#endif
