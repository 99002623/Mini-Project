#include "transaction.h"


void Transaction::addCustomer(std::string name,std::string mobNum,std::string id,std::string accNum,std::string bank,std::string ifsc,double acBal)
{
    l_mrCust.push_back(MoneyRemittance(name,mobNum,id,accNum,bank,ifsc,acBal));
}

bool Transaction::sendMoney(std::string number,double amt){

std::list<MoneyRemittance> :: iterator iter;
bool trFlag = false;

    for(iter=l_mrCust.begin();iter!=l_mrCust.end();iter++)   //Scan Database to find the customer
    {
        if(number == iter->getMobileNum())  // Customer found
        {
            iter->credit(amt);
            r_accBal = iter->getAccBalance();
            r_wBal = iter -> getWalletbal();
            trFlag = true;
            break;
        }
        
    }
    return trFlag;

}   // function end

bool Transaction::withdrawMoney(std::string number,double amt){

std::list<MoneyRemittance> :: iterator iter;
bool trFlag = false;

    for(iter=l_mrCust.begin();iter!=l_mrCust.end();iter++)   //Scan Database to find the customer
    {
        if(number == iter->getMobileNum())  // Customer found
        {
            iter->debit(amt);
            r_accBal = iter->getAccBalance();
            r_wBal = iter -> getWalletbal();
            trFlag = true;
        }
        
    }
  
    return trFlag;
    
}

/*double Transaction::updatedBalance(std::string num){
std::list<MoneyRemittance> :: iterator iter;
double t_bal;

    for(iter=l_mrCust.begin();iter!=l_mrCust.end();iter++)   //Scan Database to find the customer
    {
        if(num == iter->getMobileNum())  // Customer found
        {
           t_bal = iter->getAccBalance();
           break;
        }
        
    }
return t_bal;

}*/
