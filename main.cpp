#include "EasyRand.h"
#include <iostream>


int main() {

	EasyRand er;

	std::vector<int> bucket(5, 0);

	for (int i = 0; i < 1000000; i++) {
		double k = er.rand(0, 10);
		if (k < 2) bucket[0]++;
		else if (k < 4) bucket[1]++;
		else if (k < 6) bucket[2]++;
		else if (k < 8) bucket[3]++;
		else bucket[4]++;
	}

	for (int n : bucket) {
		std::cout << n << std::endl;
	}

	return 0;
}