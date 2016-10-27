#include <iostream>
#include <fstream>
#include <string>
#ifndef COMMISSION_H_
#define COMMISSION_H_
#pragma once

using namespace std;

class Commission : public Employee {
	double sales;

public:
	//Still virtual functions as it is in base class, Employee.
	void netPay();
	void Read(ifstream& inf);
	void Write(ofstream& outf);
};

#endif