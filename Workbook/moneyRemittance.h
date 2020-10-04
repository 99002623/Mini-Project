#ifndef _moneyRMT_h
#define _moneyRMT_h

#include "customerWallet.h"

class MoneyRemittance : public customerWallet
{
int m_accNum;
std::string m_bank;
std::string m_ifscCode;
double m_accBal = 0;

    
public:

MoneyRemittance();

// Name,Mob,id,Ac,bank,ifsc
MoneyRemittance(std::string,std::string,std::string,int,std::string,std::string);

// Virtual funcions
void credit(double);   // Account Credit or Wallet Debit
void debit(double);     // Wallet Credit or Account Debit

//setters
void updateBalance(double);

// getters
int getAccNumber();
std::string getBankName();
std::string getIfscCode();
double getAccBalance();


};   // Money Remitance end



#endif