#include <iostream>
#include <fstream>
#include <string>
#ifndef SALARY_H_
#define SALARY_H_
#pragma once

using namespace std;

class Salary : public Employee {
	double salary;

public:
	//Still virtual functions as it is in base class, Employee.
	void netPay();
	void Read(ifstream& inf);
	void Write(ofstream& outf);
};

#endif