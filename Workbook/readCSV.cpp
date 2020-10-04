#include "importDataset.h"

int main()
{

std::list<MoneyRemittance> l_mrCust = importDataset("bankDatabase.csv");
std::list<MoneyRemittance> :: iterator iter = l_mrCust.begin() ;

std::string caption = iter->getCustomerName();
std::cout << "name" << caption << std::endl;

/*for(iter=l_mrCust.begin();iter!=l_mrCust.end();iter++)   //Scan Database to find the customer
    {
       
    }*/
    



}
