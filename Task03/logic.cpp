#include "logic.h"

bool is_perfect(int number) {
	if (number % 2 == 1) {
		return false;
	}

	int sum = 1;

	int num = number / 2;

	for (int i = 2; i <= num; i++)
	{
		sum += number % i == 0 ? i : 0;
	}

	return number == sum ? true : false;
}

bool is_perfect2(int number) {
	if (number % 2 == 1) {
		return false;
	}

	int size = 8;

	int perfect_array[]{ 6, 28, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128 };

	for (int i = 0; i < 8; i++)
	{
		if (number == perfect_array[i]) {
			return true;
		}
	}

	return false;
}