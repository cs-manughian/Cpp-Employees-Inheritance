/* Author: Cosima Manughian-Peter
* CECS 282 Program 3
* Oct 8 2013
*/
#include "Employee.h"
#include "Salary.h"

using namespace std;

//Still virtual functions as it is in base class, Employee.
void Salary::netPay()
{
	//Salary per month
	net = salary / 12;
}

void Salary::Read(ifstream& inf)
{
	Employee::Read(inf);
	inf >> salary;
}

void Salary::Write(ofstream& outf)
{
	Employee::Write(outf);
	outf << " Net pay: $" << net;
	outf << " Salary: $" << salary << endl;
}
