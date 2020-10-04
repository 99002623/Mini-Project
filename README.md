



# Problem Statement

Title : "Recommendation search engine for content streaming on Netflix"  

Netflix is the world's leading subscription-based streaming entertainment service that allows their members to watch TV shows and movies without commercials on an internet-connected device.

Before watching something on Netflix, users will always be curious about its insights such as Genre,country of origin,Creators,Artists,ratings,critics and soon to visualize best shows that are available. A good solution would be a creative kernel.Hence this Project is to create a recommendation search engine based on text/description similarity techniques.This engine use a mix of content-based and collaborative filtering models to recommend tv shows and movies.

## Functions

* What to watch on Netflix ?
    - Find similar movies / tv shows using text similarity techniques 
* How to find the best rated Movies in Netflix(Best Movies)
    - The mission of this task to the best rated movies in netfilx.
* Show me the Ratings
    - Which shows are the best?

## Design
Content Recommnendation :

content.h
* Data members :
    - type
    - title 
    - director
    - cast
    - Genre
    - duration
    - release year
    - country
    - description



* Operations :
    - Constructor
    - getters

movie m1(titile,director,cast,country,year,duration,genre,description)

list searchByName(string "jnsdfkjsfnd")
list searchByDirector
list searchByCast
list searcgByYear
list searchByGenre
getMoviedetails(movie obj)
findMovie

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
