/* Author: Cosima Manughian-Peter
* CECS 282 Program 3
* Oct 8 2013
*/
#include "Employee.h"
#include "Commission.h"

using namespace std;

//Still virtual functions as it is in base class, Employee.
void Commission::netPay()
{
	//Commission is paid on a graduated basis
	if (sales <= 15000)
		net = sales * 0.12;
	else if (sales > 15000 && sales <= 25000)
		net = (15000 * 0.12) + ((sales - 15000) * 0.15);
	else //if(sales > 25000)
		net = (15000 * 0.12) + ((sales - 15000) * 0.15) + ((sales - 25000) * 0.20);
}

void Commission::Read(ifstream& inf)
{
	Employee::Read(inf);
	inf >> sales;
}

void Commission::Write(ofstream& outf)
{
	Employee::Write(outf);
	outf << " Net pay: $" << net;
	outf << " Sales: $" << sales << endl;
}