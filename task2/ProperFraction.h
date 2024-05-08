#pragma once
#include <iostream>
#include <string>

class ProperFraction {

private:
	int numerator;
	int denominator;

	int gcd(int a, int b) {
		while (b != 0) {
			int t = b;
			b = a % b;
			a = t;
		}
		return a;
	}

public:

	ProperFraction() : numerator(0), denominator(1) {}

	ProperFraction(int num, int denom) : numerator(num), denominator(denom) {
		if (denom == 0) {
			throw ("Знаменатель не может быть равен нулю");
		}
		normalize();
	}

	~ProperFraction() {
		std::cout << "Объект дроби уничтожен" << std::endl;
	}

	double toPercentage() const {
		return static_cast<double>(numerator) / denominator * 100.0;
	}

	int sumOfDigDenom() const {
		int sum = 0;
		int tmp = denominator;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		return sum;
	}

	void normalize() {
		int gcdVal = gcd(numerator, denominator);
		numerator /= gcdVal;
		denominator /= gcdVal;
	}

	std::string getInfo() {
		return std::to_string(numerator) + '\\' + std::to_string(denominator);
	}
};

