#include "moneyRemittance.h"

MoneyRemittance::MoneyRemittance():customerWallet(){}
MoneyRemittance::MoneyRemittance(std::string name,std::string mobNum,double bal):customerWallet(name,mobNum,bal){}
MoneyRemittance::MoneyRemittance(std::string name,std::string mobNum,std::string id,double bal):customerWallet(name,mobNum,id,bal){}

void MoneyRemittance ::credit(double amt){
// Credit the balance to Bank accout
w_balance -= amt ;
}

void MoneyRemittance ::debit(double amt){
// Credit the balance to Bank accout
w_balance += amt ;
}

double MoneyRemittance::getAcBal(){
    return w_balance;
}
