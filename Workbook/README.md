g++ readCSV.cpp -c

# File handling
The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

#include <iostream>
#include <fstream> 

Object/Data Type 	Description
ofstream 	Creates and writes to files
ifstream 	Reads from files
fstream 	A combination of ofstream and ifstream: creates, reads, and writes to files