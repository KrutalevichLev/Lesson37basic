#include "util.h"

int main() {
	int number;

	cout << "Enter your number: ";
	cin >> number;

	cout << "Max digit in your number: " << find_max_digit(number) << endl;
	cout << "Min digit in your number: " << find_min_digit(number);

	return 1;
}