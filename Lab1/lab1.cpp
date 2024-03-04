#include <iostream>
using namespace std;

void pyramid(int rows);

int main() {
	int rows, num;

	cout << "Enter height: ";
	cin >> rows;
	cout << "Enter your number in student list: ";
	cin >> num;
	pyramid(rows);
	pyramid((num % 5 + 5));
	return 0;
}

void pyramid(int rows) {
	cout << '\n';

	for (int i = 0; i < rows; i++)
	{
		for (int j = rows - 1; j > i; j--) {
			cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}

		for (int j = 0; j < i; j++) {
			cout << i;
		}

		cout << '\n';
	}
}
