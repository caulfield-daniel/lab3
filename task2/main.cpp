#include <iostream>
#include "ProperFraction.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	ProperFraction frac1;
	cout << "Дробь 1:\t" << frac1.getInfo() << "\t" << frac1.toPercentage() << "%\t" << frac1.sumOfDigDenom() << endl;
	ProperFraction frac2(1, 2);
	cout << "Дробь 2:\t" << frac2.getInfo() << "\t" << frac2.toPercentage() << "%\t" << frac2.sumOfDigDenom() << endl;
	ProperFraction frac3(3, 2);
	cout << "Дробь 3:\t" << frac3.getInfo() << "\t" << frac3.toPercentage() << "%\t" << frac3.sumOfDigDenom() << endl;

	return 0;
}

