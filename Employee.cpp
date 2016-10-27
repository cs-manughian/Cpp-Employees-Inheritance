/* Author: Cosima Manughian-Peter
* CECS 282 Program 3
* Oct 8 2013
*/
#include <iostream>
#include <fstream>
#include <string>
#include "Employee.h"

using namespace std;

void Employee::Read(ifstream& inf)
{
	for (int i = 0; i < 11; i++)
		inf >> EmpID[i];
	EmpID[11] = ' ';

	for (int j = 0; j < 4; j++)
		inf >> DeptID[j];
	DeptID[4] = ' ';
}

void Employee::Write(ofstream& outf)
{
	outf << "Employee #";
	for (int i = 0; i < 12; i++)
		outf << EmpID[i];

	outf << " Dept# ";
	for (int j = 0; j < 5; j++)
		outf << DeptID[j];
}