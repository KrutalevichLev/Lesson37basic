#include "logic.h"

int find_max_digit(int number) {
	int max = number % 10;
	number /= 10;

	while (number > 0) {
		if (max < number % 10) {
			max = number % 10;
		}
		number /= 10;
	}

	return max;
}

int find_min_digit(int number) {
	int min = number % 10;
	number /= 10;

	while (number > 0) {
		if (min > number % 10) {
			min = number % 10;
		}
		number /= 10;
	}

	return min;
}