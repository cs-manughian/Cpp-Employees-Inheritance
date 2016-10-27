/* Author: Cosima Manughian-Peter
* CECS 282 Program 3
* Oct 8 2013
*/
#include "Employee.h"
#include "Commission.h"
#include "Salary.h"
#include "Hourly.h"

using namespace std;

int main()
{
	Employee* pEmp;

	ifstream infile;
	ofstream outfile;

	infile.open("data.txt");
	outfile.open("outData.txt");

	char c = infile.get();

	while (!infile.eof()) {
		//1 is salaried, 2 is hourly, and 3 is commission.

		if (c == '1')
			pEmp = new Salary();
		else if (c == '2')
			pEmp = new Hourly();
		else if (c == '3')
			pEmp = new Commission();
		else
			cout << "Invalid employee type" << endl;

		pEmp->Read(infile);
		pEmp->netPay();
		pEmp->Write(outfile);

		//Read next employee type
		infile.ignore();
		c = infile.get();

	} //end while

	infile.close();
	outfile.close();
	return 0;
}