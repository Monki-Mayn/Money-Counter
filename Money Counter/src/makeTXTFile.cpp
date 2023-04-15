#include "makeTXTFile.h"
#include <iostream>
#include <fstream>

void makeTXTFile(int numberOfDenominations, int denominations[], int numberOfBills[], int total)
{
	std::ofstream outfile("total.txt");
	if (outfile.is_open()) {
		outfile << "Here are your totals for each denomination"
			<< "\n\n100:  $" << numberOfBills[0] * denominations[0]
			<<   "\n50 :  $" << numberOfBills[1] * denominations[1]
			<<   "\n20 :  $" << numberOfBills[2] * denominations[2]
			<<   "\n10 :  $" << numberOfBills[3] * denominations[3]
			<<   "\n5  :  $" << numberOfBills[4] * denominations[4]
			<<   "\n1  :  $" << numberOfBills[5] * denominations[5];
		outfile << "\n\n\nTotal: $" << total;
	}
	outfile.close();
}