#include<iostream>
#include<time.h>
#include<stdio.h>
using namespace std;
void cal(int i) {
	int num1, num2, num3, a, b, c = 0;
	char ope1, ope2;

	while (c < i) {
		num1 = rand() % 100;
		num2 = rand() % 100;
		num3 = rand() % 100;
		a = 1 + rand() % 3;
		b = 1 + rand() % 3;

		switch (a) {
		case 1:ope1 = '+'; break;
		case 2:ope1 = '-'; break;
		case 3:ope1 = '*'; break;
		case 4:ope1 = '/'; break;
		default: ope1 = '+'; break;
		}
		switch (b) {
		case 1:ope2 = '+'; break;
		case 2:ope2 = '-'; break;
		case 3:ope2 = '*'; break;
		case 4:ope2 = '/'; break;
		default: ope2 = '+'; break;
		}
		int sum = 0;
		if ((a == 3 || a == 4) && (b == 3 || b == 4)) {
			if (a == 3 && b == 3) sum = num1 * num2 * num3;
			if (a == 3 && b == 4) sum = num1 * num2 / num3;
			if (a == 4 && b == 3) sum = num1 / num2 * num3;
			if (a == 4 && b == 4) sum = num1 / num2 / num3;
		}
		else
			if ((a == 3 || a == 4) && !(b == 3 || b == 4)) {
				if (a == 3 && b == 1) sum = num1 * num2 + num3;
				if (a == 3 && b == 2) sum = num1 * num2 - num3;
				if (a == 4 && b == 1) sum = num1 / num2 + num3;
				if (a == 4 && b == 2) sum = num1 / num2 - num3;
			}
			else
				if (!(a == 3 || a == 4) && (b == 3 || b == 4)) {
					if (a == 1 && b == 3) sum = num1 + num2 * num3;
					if (a == 1 && b == 4) sum = num1 * num2 + num3;
					if (a == 2 && b == 3) sum = num1 * num2 - num3;
					if (a == 2 && b == 4) sum = num1 / num2 - num3;
				}
				else {
					if (a == 1 && b == 1) sum = num1 + num2 + num3;
					if (a == 1 && b == 2) sum = num1 + num2 - num3;
					if (a == 2 && b == 1) sum = num1 - num2 + num3;
					if (a == 2 && b == 2) sum = num1 - num2 - num3;
				}
		cout << num1 << ope1 << num2 << ope2 << num3 << "=" << sum << endl;
		c++;
	}
}
int main() {
	srand((unsigned)time(NULL));
	int i;

	cout << "输入题数" << endl;
	cin >> i;
	cal(i);



	return 0;
}