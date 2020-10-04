#include "transaction.h"

bool Transaction::sendMoney(std::string number,double amt){

std::list<MoneyRemittance> :: iterator iter;
bool trFlag = false;

    for(iter=l_mrCust.begin();iter!=l_mrCust.end();iter++)   //Scan Database to find the customer
    {
        if(number == iter->getMobileNum())  // Customer found
        {
            iter->credit(amt);
            trFlag = true;
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
            trFlag = true;
        }
        
    }
  
    return trFlag;
    
}


