#include "moneyRemittance.h"

MoneyRemittance::MoneyRemittance():customerWallet(),m_accNum(0),m_bank(""),m_ifscCode(""){}

MoneyRemittance::MoneyRemittance(std::string name,std::string mobNum,std::string id,int accNum,std::string bank,std::string ifsc,double acBal):
customerWallet(name,mobNum,id,0),m_accNum(accNum),m_bank(bank),m_ifscCode(ifsc),
m_accBal(acBal){}

void MoneyRemittance ::credit(double amt){
m_accBal += amt;
w_balance -= amt ;
}

void MoneyRemittance ::debit(double amt){
m_accBal -= amt;
w_balance += amt ;
}

double MoneyRemittance::getAccBalance(){
    return m_accBal;
}

int MoneyRemittance::getAccNumber(){
    return m_accNum;
}

std::string MoneyRemittance::getBankName(){
    return m_bank;
}

std::string MoneyRemittance::getIfscCode(){
    return m_ifscCode;
}