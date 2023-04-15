#include "makeTXTFile.h"
#include <iostream>
#include <fstream>

int main()
{
	const int numberOfDenominations{ 6 };
	int denominations[numberOfDenominations] = { 100, 50, 20, 10, 5, 1 };
	int numberOfBills[numberOfDenominations];
	int total{};

	std::cout << "Please enter the amount of bills you have for each denomination\n\n";
	for (int i = 0; i < numberOfDenominations; i++) {
		std::cout << denominations[i] << ": ";
		std::cin >> numberOfBills[i];
		std::cout << '\n';
		total += numberOfBills[i] * denominations[i];
	}

	std::cout << '\n' << "You have $" << total << '\n';

	std::cin.get();
	std::cin.get();

	makeTXTFile(numberOfDenominations, denominations, numberOfBills, total);

	return 0;
}