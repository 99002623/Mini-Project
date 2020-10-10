#include "transaction.h"


void Transaction::addCustomer(std::string name,std::string mobNum,std::string id,std::string accNum,std::string bank,std::string ifsc,double acBal)
{
    l_mrCust.push_back(MoneyRemittance(name,mobNum,id,accNum,bank,ifsc,acBal));
}

void Transaction::addCustomer(vector<string> data){
    double iniBal = std::atof(data[6].c_str());
    l_mrCust.push_back(MoneyRemittance(data[0],data[1],data[2],data[3],data[4],data[5],iniBal));
}


void Transaction::importDataset(string fileName){

ifstream file;  // define file handler in readmode
string line,dataField;

file.open(fileName);

getline(file,line);  //Read 1st line
vector<string> lineData;

    while(getline(file,line)){     //Read from 2nd Line
        stringstream s(line);  // Converting datatype
        while (getline(s, dataField,',')) {     //extract dataFiled into vector
        lineData.push_back(dataField);
        }
        addCustomer(lineData);
        lineData.clear();
    }

file.close();

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



void Transaction::showCustomers(){

list<MoneyRemittance>::iterator iter;

cout << "Accout List" << endl ;
    for(iter = l_mrCust.begin();iter != l_mrCust.end();iter++)
    {
        cout << iter->getCustomerName() << endl;
    }

}