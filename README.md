
![C++ cmake Unit test](https://github.com/99002623/Test/workflows/C++%20cmake%20Unit%20test/badge.svg)

# New Workflow Commads
cd build
cmake .
make
./out


  alias genMake='cd build && cmake . && cd ..'
  alias build='cd build && make && ./out && cd ..'

# Commands
clear
g++ readCSV.cpp -c
g++ readCSV.cpp -o out
./out

g++ customerWallet.cpp test.cpp -c         //--> Compile
g++ customerWallet.o test.o -lgtest -lgtest_main -lpthread -o out      // Link
./out                   // exe

g++ customerWallet.cpp moneyRemittance.cpp test.cpp -c 
g++ customerWallet.o moneyRemittance.o test.o -lgtest -lgtest_main -lpthread -o out
./out 

g++ customerWallet.cpp moneyRemittance.cpp transaction.cpp test.cpp -c 
g++ customerWallet.o moneyRemittance.o transaction.o test.o -lgtest -lgtest_main -lpthread -o out
./out 

g++ customerWallet.cpp moneyRemittance.cpp readCSV.cpp -c
g++ readCSV.cpp -c
g++ customerWallet.o moneyRemittance.o readCSV.o -o a
./a

# Tasks
* C++ Source code
    * Operator Overload
    * Templates
    * Code quality check
    * Git Configurations
        - project folder
        - Actions setup
        - Workflow Setup
        - Integration setup
        - unit testing
        - Code Quality
            Codacy
            Vlagring
            Cpp Check
            

* Linux Develop
    * Makefiles
        - Dynamic Lib
        - static lib
        - without lib
    
    * IPC - simophore

* Documentation 
    * UML Diagrams

# Description
## Topic
    Wallet based Money Remittance 

## Problem Statement

This is MoneyWallet which provides the Money Remittance service to the customers to transfer  or withdraw the funds to Bank account from the Wallet .


# Procedure 
1. Requirement Phase
    1. Select a theme/Project Idea/Topic/Product
    2. Research 
        * Ageing 
        * Cost Gradation
    3. Define your solution 
    4. SWOT Analysis Your Solution
    5. Requirements 
        - Low Level (technical Specification requirements)
        - High level (service providers for low level requirements)

    Format - Requirement ID| Description

2. Design Phase
    1. High Level (data flow, flow charts and data structures are covered under HLD.)
        Behavioral Diagram (2 min)
        Structural Diagram (2 min)
    2. Low Level(Logic)
        Behavioral Diagram (2min)
        Structural Diagram (2 min)

3. Test Plan 
    - High Level/ Integration Test Plan 
    - Low Level/ Unit Test Plan 

    Format - Test ID | Description | Precondition | Expected IO| Expected OP| Actual OP

 
4. Implementation in respective module

    CI framework 
        GIT (we will be using gitinspectors for analysis of GIT repos)
        Build and Make - Github Actions 
        Unit Test Framework 
        Code Quality 
    Activities to make yourself comfortable with CI 
        3 file system - 1 .H 1 .C and 1.YML (Build through gcc command)
        4 File System - Same as above + Make file (Build through make)

# Checklist

## Cpp
* No.of classes 	d
    - Domain classes 
	- Utility Classes 
	
* Class Relationships	
    - Is-a
	- Has-a/part-of
	- using
	
* Language Features	
    - Virtual Functions
	- Dynamic Binding
	- Operator Overloading
	- Templates
	- File Handling   
	- Namespace
	- STL Containers
	- Iterators
	- Algorithms
	- Function Objects
	
* Code Quality	
    - Code Style
	- Static Analysis
	- Heap Analysis
	
* Unit Testing	
    - Assertions
	- Test Fixtures

## Linux
* Development Tools	Makefiles
	- Static Libraries
	- Dynamic Libraries
	
* OS Concepts	Threading
	- IPC Techniques – Mutual Exclusion
	- IPC Techniques – Data Exchange
	- File Handling (system level)
