#include "logic.h"

int main() {
	int number;

	cout << "Enter your number: ";
	cin >> number;

	cout << "Your number is " << (is_perfect(number) ? " " : "not ") << "perfect." << endl;
	cout << "Your number is " << (is_perfect2(number) ? " " : "not ") << "perfect.";

	return 1;
}