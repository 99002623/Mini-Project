#include <iostream>   //io handling
#include <fstream>    //file handling
#include <string>     // srtring data
#include <bits/stdc++.h>   //STL(Vector)


using namespace std;

vector<string> parseData(string line);  


int main()
{

ifstream dataset;   // Read mode
dataset.open("test.csv");   // Open file

cout << "Reading from the file:...." << endl; 

string line;

while(dataset >> line){     // Read data line

vector<string> data = parseData(line);// Parse data

for (auto i = data.begin(); i != data.end(); ++i) 
        cout << *i << " "; 

cout << endl;
}

dataset.close(); //Close file
return 0;
}


//---> User defined fucntions

vector<string> parseData(string line){

vector<string> data ;
//vector<string> :: iterator iter;
string word;
stringstream s(line);  // bracking line
data.clear();   //Clear data_elements
    while (getline(s, word, ',')) { 
    data.push_back(word);
    } 
return data;
} // end of parse data

/*    

//---> STL Code for import data set
std::list<Moives> l_movies;

bool importMovies(string fileName)
{
ifstream dataset;   // Read mode
dataset.open(fileName);   // Open file
string line;
while(dataset >> line){
vector<string> data = parseData(line);// Parse data
l_movies.push_back(Movies(data[0],data[1],data[2],data[3],data[4]));
}
dataset.close(); //Close file
return true;
}

*/