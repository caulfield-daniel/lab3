#include <iostream>
#include "RightTriangle.h"

int main() {

	int a, b;

	std::cout << "Catheter a: ";
	std::cin >> a;

	std::cout << "Catheter b: ";
	std::cin >> b;

	RightTriangle rtriangle(a, b);

	std::cout << rtriangle.getInfo() << std::endl;
	std::cout << "Hypotenuse: " << rtriangle.getHypotenuse() << std::endl;

	return 0;
}
