#include<iostream>
using namespace std;

void recursive(int counter, int num, int max, int iter) {
	if (num == 0 || num > max) {
		counter *= -1;
		iter += 1;
	}
	else {
		cout << num << " ";
	}
	num += counter;
	if (iter != 2)
		recursive(counter, num, max, iter);
}

int main() {
	cout << "\n------------------- PART 1 -------------------\n\n";

	int month;
	cout << "Input a month's number, (1 = Jan, 2 = Feb, etc):\n";
	cin >> month;
	if (month == 2) {
		cout << "There are 28 days in that month.\n\n\n";
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		cout << "There are 31 days in that month.\n\n\n";
	}
	else {
		cout << "There are 30 days in that month.\n\n\n";
	}

	cout << "------------------- PART 2 -------------------\n\n";

	bool inGame = true;
	int room = 1;
	char userInput;
	cout << "Input  w a s d  to move rooms, both invalid move choices and other inputs will move on to part 3.\n";
	while (inGame) {
		cout << "\nYou are in room " << room << " and your exits are ";
		if (room == 1) {
			cout << "Up (w), Left (a), & Right (d)\n";
			cin >> userInput;
			if (userInput == 'w')
				room = 2;
			else if (userInput == 'a')
				room = 3;
			else if (userInput == 'd')
				room = 4;
			else
				inGame = false;
		}
		else if (room == 2) {
			cout << "Down (s)\n";
			cin >> userInput;
			if (userInput == 's')
				room = 1;
			else
				inGame = false;
		}
		else if (room == 3) {
			cout << "Right (d)\n";
			cin >> userInput;
			if (userInput == 'd')
				room = 1;
			else
				inGame = false;
		}
		else if (room == 4) {
			cout << "Left (a), & Down (s)\n";
			cin >> userInput;
			if (userInput == 'a')
				room = 1;
			else if (userInput == 's')
				room = 5;
			else
				inGame = false;
		}
		else if (room == 5) {
			cout << "Up (w)\n";
			cin >> userInput;
			if (userInput == 'w')
				room = 4;
			else
				inGame = false;
		}
		else
			inGame = false;
	}

	cout << "\n\n------------------- PART 3 -------------------\n\n";

	int userInput2;
	cout << "Enter a number, 0 to quit.\n";
	cin >> userInput2;
	if (userInput != 0) {
		recursive(-1, userInput2, userInput2, 0);
	}
}