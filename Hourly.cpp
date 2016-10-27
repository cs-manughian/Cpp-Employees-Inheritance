/* Author: Cosima Manughian-Peter
* CECS 282 Program 3
* Oct 8 2013
*/
#include "Employee.h"
#include "Hourly.h"

using namespace std;

//Still virtual functions as it is in base class, Employee.
void Hourly::netPay()
{
	// Calculate pay, else calculate pay + overtime.
	if (hours < 40)
		net = rate * hours;
	else
		net = (rate * (hours - (hours - 40))) + (1.5 * rate) * (hours - 40);
}

void Hourly::Read(ifstream& inf)
{
	Employee::Read(inf);
	inf >> hours >> rate;
}

void Hourly::Write(ofstream& outf)
{
	Employee::Write(outf);
	outf << " Net pay: $" << net;
	outf << " Hours: " << hours << " Rate: $" << rate << endl;
}