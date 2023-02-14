#include <iostream>
using namespace std;

int main()
{
	char whichPackage;
	int howManyJams = 0;
	int monthlyFee = 0;
	int jamsIncluded = 0;
	int jamsPrice = 0;
	int totalCost;

	cout << "what package do you own A, B, C " << endl;
	cin >> whichPackage;
	cout << "How many jams, jellies, or preserves did you purchase this month? " << endl;
	cin >> howManyJams;

	if (whichPackage == 'a' || whichPackage == 'A') 
	{
		monthlyFee = 8;
		jamsIncluded = 2;
		jamsPrice = 5;
	}
	else if (whichPackage == 'b' || whichPackage == 'B')
	{
		monthlyFee = 12;
		jamsIncluded = 4;
		jamsPrice = 4;
	}
	else if (whichPackage == 'c' || whichPackage == 'C')
	{
		monthlyFee = 15;
		jamsIncluded = 6;
		jamsPrice = 3;
	}
	else
	{
		cout << "You selected a non-existent package" << endl;
	}

	// Calculate total cost
	if (howManyJams <= jamsIncluded)
	{
		// just charge the monthly fee + (difference) * jamPrice
		totalCost = monthlyFee;
	}
	else
	{
		// charge monthle fee + differnce + jamPrice
		totalCost = monthlyFee + (howManyJams - jamsIncluded) * jamsPrice;
	}

	cout << " You owe $" << totalCost << endl;

	return 0;
}