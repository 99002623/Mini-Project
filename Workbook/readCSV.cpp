#include <iostream>
#include <string>
#include <fstream> 

using namespace std;

int main()
{
string data;
ifstream dataset;

// Open file
dataset.open("test.csv");

// Read data
cout << "Reading from the file" << endl; 
dataset >> data; 

// write the data at the screen.
cout << data << endl;

//Close file
dataset.close(); 

 return 0;   
}