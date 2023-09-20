#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int a, b, c;
	c = 0;
	cout << "Введите первое число:" << endl;
	cin >> a;
	cout << "Введите второе число" << endl;
	cin >> b;
	if (a % 2 == 1) {
		c += 1;
	}
	if (b % 2 == 1) {
		c += 1;
	}
	if (c == 1) {
		cout << "Истина" << endl;
	}
	else if (c != 1) {
		cout << "Ложь" << endl;
	}
}