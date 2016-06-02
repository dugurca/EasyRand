#pragma once

#include <random>
#include <iostream>

class EasyRand {
private:
	std::random_device randDev;
	std::mt19937 mTwister;
	std::uniform_real_distribution<> dist;
public:
	EasyRand() {
		mTwister.seed(randDev());
		dist = std::uniform_real_distribution<double>(0, 1);
	}

	double rand() {
		return dist(mTwister);
	}

	double rand(int min, int max) {
		return min + (max - min) * rand();
	}

	double rand(double min, double max) {
		return min + (max - min) * rand();
	}

	std::vector<double> randVec(int n) {
		std::vector<double> vec(n);
		for (int i = 0; i < n; i++) {
			vec[i] = rand();
		}
		return vec;
	}

	std::vector<double> randVec(int n, int min, int max) {
		std::vector<double> vec(n);
		for (int i = 0; i < n; i++) {
			vec[i] = rand(min, max);
		}
		return vec;
	}

	std::vector<double> randVec(int n, double min, double max) {
		std::vector<double> vec(n);
		for (int i = 0; i < n; i++) {
			vec[i] = rand(min, max);
		}
		return vec;
	}
};