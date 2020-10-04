#ifndef _importDataset_h
#define _importDataset_h

#include "moneyRemittance.h"
#include <fstream>    //file handling
#include <string>     // srtring data
//#include <list>  
//#include <vector> 
#include <bits/stdc++.h> 

using namespace std;

vector<string> parseData(string line){

vector<string> data ;
string word;
stringstream s(line);  // bracking line
data.clear();   //Clear data_elements
    while (getline(s, word, ',')) { 
    data.push_back(word);
    } 
return data;
} // end of parse data 


list<MoneyRemittance> importDataset(string fileName)
{
list<MoneyRemittance> mrCust;

ifstream dataset;   // Read mode
dataset.open(fileName);   // Open file
string line;

    while(dataset >> line){
    vector<string> data = parseData(line);// Parse data
    mrCust.push_back(MoneyRemittance(data[0],data[1],data[2],data[3],data[4],data[5],stoi(data[6])));
    }
    
dataset.close(); //Close file
return mrCust;
}


/*

std::vector<std::string> parseData(std::string line);

std::list<MoneyRemittance> importDataset(std::string fileName)
{
std::list<MoneyRemittance> mrCust;
std::ifstream dataset;   // Read mode
dataset.open(fileName);   // Open file
std::string line;

    while(dataset >> line){
    std::vector<std::string> data = parseData(line);// Parse data
    mrCust.push_back(MoneyRemittance(data[0],data[1],data[2],data[3],data[4],data[5],stoi(data[6])));
    }
    
dataset.close(); //Close file
return mrCust;
}

std::vector<std::string> parseData(std::string line){

std::vector<std::string> data ;
std::string word;
std::stringstream s(line);  // bracking line
data.clear();   //Clear data_elements
    while (getline(s, word, ',')) { 
    data.push_back(word);
    } 
return data;
} // end of parse data  */

#endif