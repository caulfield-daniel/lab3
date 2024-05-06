#pragma once
#include <string>
#include <math.h>

class RightTriangle {
private:
	double a;
	double b;

public:
	RightTriangle(double default_a, double default_b) : a(default_a), b(default_b) {}

	std::string getInfo() {
		return "First catheter: " + std::to_string(a) + "\nSecond catheter: " + std::to_string(b);
	}

	double getHypotenuse() {
		return sqrt(a * a + b * b);
	}
	
};