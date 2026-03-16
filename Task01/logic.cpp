#include "logic.h"

int find_max_digit(int number) {
	int max = number % 10;

	while (number > 0) {
		number /= 10;

		int digit = number % 10;

		if (max < digit) {
			max = digit;
		}

		if (max == 9) {
			break;
		}
	}

	return max;
}

int find_min_digit(int number) {
	int min = number % 10;

	while (number > 0) {
		number /= 10;

		int digit = number % 10;

		if (min > digit) {
			min = digit;
		}

		if (min == 0) {
			break;
		}
	}

	return min;
}