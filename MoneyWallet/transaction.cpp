#include "transaction.h"


void Transaction::addCustomer(std::string name,std::string mobNum,std::string id,std::string accNum,std::string bank,std::string ifsc,double acBal)
{
    l_mrCust.push_back(MoneyRemittance(name,mobNum,id,accNum,bank,ifsc,acBal));
}

MoneyRemittance Transaction::parseData(std::string line) {        //Line input

    std::string word;
    std::stringstream s(line);
    std::vector<std::string> lineData;

    lineData.clear();
    while (getline(s, word, ',')) {
    lineData.push_back(word);
    }
    double iniBal = std::atof(lineData[6].c_str());
    MoneyRemittance d1(lineData[0],lineData[1],lineData[2],lineData[3],lineData[4],lineData[5],iniBal);

    return d1;
}


void Transaction::importDataset(std::string fileName){

//std::list<MoneyRemittance> mrCust;
std::string line;
std::ifstream file;  // define file handler

file.open(fileName);
    while(std::getline(file,line)){
    MoneyRemittance pData = parseData(line);
    l_mrCust.push_back(pData);
    }

//return mrCust;

}//Import end

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
