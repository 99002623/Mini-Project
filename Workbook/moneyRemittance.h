#ifndef _moneyRMT_h
#define _moneyRMT_h

#include "customerWallet.h"

class MoneyRemittance : public customerWallet
{
std::string m_accNum;
std::string m_bank;
std::string m_ifscCode;
double m_accBal = 0;

    
public:

MoneyRemittance();

// Name,Mob,id,Ac,bank,ifsc,bal
MoneyRemittance(std::string,std::string,std::string,std::string,std::string,std::string,double);

// Virtual funcions
void credit(double);   // Account Credit or Wallet Debit
void debit(double);     // Wallet Credit or Account Debit

// getters
std::string getAccNumber();
std::string getBankName();
std::string getIfscCode();
double getAccBalance();


};   // Money Remitance end



#endif