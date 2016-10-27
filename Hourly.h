#include <iostream>
#include <fstream>
#include <string>
#ifndef HOURLY_H_
#define HOURLY_H_
#pragma once

using namespace std;

class Hourly : public Employee {
	double rate;
	double hours;

public:
	//Still virtual functions as it is in base class, Employee.
	void netPay();
	void Read(ifstream& inf);
	void Write(ofstream& outf);
};

#endif