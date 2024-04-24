#include <iostream>

int numbersFromUser();
void nonRepeatNumbers(int[], int);

int main()
{
	const int range = 101;
	int hash[range] = {};
	const int size = 5;
	std::cout << "Enter " << size << " numbers between 10 to 100 ";
	for (int counter = 0; counter < size; ++counter) {
		int number = numbersFromUser();
		++(hash[number]);
	}
	nonRepeatNumbers(hash, range);
	
	return 0;
}

int numbersFromUser()
{
	int number;
	std::cin >> number;
	return number;
}

void nonRepeatNumbers(int hash[], int range)
{
	for (int counter = 0; counter < range; ++counter) {
		if (1 == hash[counter]) {
			std::cout << counter << std::endl;
		}
	}
}
