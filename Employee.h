#include <iostream>
#include <fstream>
#include <string>
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#pragma once

using namespace std;

class Employee {
protected:
	char EmpID[12];
	char DeptID[5];
	double net;

public:
	virtual void netPay() = 0;
	virtual void Read(ifstream& inf);
	virtual void Write(ofstream& outf);
};

#endif