#include "logic.h"

int count_multioles(int number, int mult) {
	return mult * (1 + number) * number / 2;
}

int count(int number) {

	return count_multioles(number, 3) +
		count_multioles(number, 5) +
		count_multioles(number, 15);
}
