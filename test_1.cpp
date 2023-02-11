#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == 1 && b == 2)
	{
		for (int n = a; n <= b; n++)
		{
			if (n == 1) {
				cout << "one" << endl;
			}
			if (n == 2) {
				cout << "two" << endl;
			}
			if (n == 3) {
				cout << "three" << endl;
			}
			if (n == 4) {
				cout << "four" << endl;
			}
			if (n == 5) {
			}
			if (n == 6) {
				cout << "six" << endl;
			}
			if (n == 7) {
				cout << "seven" << endl;
			}
			if (n == 8) {
				cout << "eight" << endl;
			}
			if (n == 9) {
				cout << "nine" << endl;
			}
		}

	}
	else if (a <= b) {
		for (int n = a; n <= b; n++)
		{
			if (n == 1) {
				cout << "one" << endl;
			}
			if (n == 2) {
				cout << "two" << endl;
			}
			if (n == 3) {
				cout << "three" << endl;
			}
			if (n == 4) {
				cout << "four" << endl;
			}
			if (n == 5) {
				cout << "five" << endl;
			}
			if (n == 6) {
				cout << "six" << endl;
			}
			if (n == 7) {
				cout << "seven" << endl;
			}
			if (n == 8) {
				cout << "eight" << endl;
			}
			if (n == 9) {
				cout << "nine" << endl;
			}
		}
		for (int n = a; n <= b; n++)
		{
			if (n % 2 == 0 && n > 9) {
				cout << "even" << endl;
			}
			else if(n % 2 != 0 && n > 9) {
				cout << "odd" << endl;
			}
		}
	}
	else {
		cout << "the a is not smaller or equel b" << endl;
	}
	system("pause>0");
	return 0;
}