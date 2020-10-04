#ifndef _moneyRMT_h
#define _moneyRMT_h

#include "customerWallet.h"

class MoneyRemittance : public customerWallet
{
    
public:

MoneyRemittance();
MoneyRemittance(std::string,std::string,double);
MoneyRemittance(std::string,std::string,std::string,double);

// Virtual funcions
void credit(double);   // Account Credit or Wallet Debit
void debit(double);     // Wallet Credit or Account Debit

// getters
double getAcBal();


};   // Money Remitance end



#endif