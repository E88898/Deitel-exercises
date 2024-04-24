#include <iostream>
#include <ctime>
#include <iomanip>

const int RACE_END = 70;
void moveTortoise(int* const);
void moveHare(int* const);
void printCurrentPositions(const int* const, const int* const);

int main()
{
	int tortoise = 1, hare = 1, timer = 0;	
	srand(time(0));
	
	std::cout << "BANG !!!!"
	<< "\nAND THEY'RE OFF !!!!\n\n";
	
	while (tortoise != RACE_END && hare != RACE_END) {
		moveTortoise(&tortoise);
		moveHare(&hare);
		printCurrentPositions(&tortoise, &hare);
		++timer;
	}
	
	if (tortoise >= hare) {
		std::cout << "\nTORTOISE WINS!!! YAY!!!\n";
	} else {
		std::cout << "Hare wins. Yuch.\n";
	}
	
	std::cout << "TIME ELAPSED = " << timer << " seconds" << std::endl;
	
	return 0;
}

 void moveTortoise(int* const turtlePtr)
{
	int x = 1 + rand() % 10;
	
	if (x >= 1 && x <= 5) {
		*turtlePtr += 3;
	} else if (x == 6 || x == 7) {
		*turtlePtr -= 6;
	} else {
		++(*turtlePtr);
	}
	
	if (*turtlePtr < 1) {
		*turtlePtr = 1;
	} else if (*turtlePtr > RACE_END) {
		*turtlePtr = RACE_END;
	}
	
}

 void moveHare(int* const rabbitPtr)
{
	int y = 1 + rand() % 10;
	
	if (y == 3 || y == 4) {
		*rabbitPtr += 9;
	} else if (y == 5) {
		*rabbitPtr -= 12;
	} else if (y >= 6 && y <= 8) {
		++(*rabbitPtr);
	} else if (y > 8) {
		*rabbitPtr -= 2;
	}
	if (*rabbitPtr < 1) {
		*rabbitPtr = 1;
	} else if (*rabbitPtr > RACE_END) {
		*rabbitPtr = RACE_END;
	}

}

void printCurrentPositions(const int* const snapperPtr, const int* const bunnyPtr)
{
	if (*bunnyPtr == *snapperPtr) {
		std::cout << std::setw(*bunnyPtr) << "OUCH!!!";
	} else if (*bunnyPtr < *snapperPtr) {
		std::cout << std::setw(*bunnyPtr) << 'H'
		          << std::setw(*snapperPtr - *bunnyPtr) << 'T';
	} else {
		std::cout << std::setw(*snapperPtr) << 'T'
			      << std::setw(*bunnyPtr - *snapperPtr) << 'H';
	}
	std::cout << '\n';
}