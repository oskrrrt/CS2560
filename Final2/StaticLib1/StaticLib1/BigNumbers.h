#pragma once
#include <iostream>
#include <vector>
#include <string>



class BigNumbers {
private:
	std::vector <int> bigs; 
	bool ispositive; 
	void addition(const std::vector <int> &p, const std::vector <int> &q, std::vector <int> &r); 
	void subtraction(const std::vector <int> &p, const std::vector <int> &q, std::vector <int> &r); 
	//vector
	void reversenumber(std::vector <int> & r); 
	  

public:
	BigNumbers(); 

	
	BigNumbers(std::string str); 
	//Operator we have a problem
	BigNumbers operator -(const BigNumbers & num); 
	BigNumbers operator *(const BigNumbers & num); 
	BigNumbers operator +(const BigNumbers & num); 
	BigNumbers & operator =(const BigNumbers & num); 
	
};



