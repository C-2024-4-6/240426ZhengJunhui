#include<iostream>
using namespace std;
int main() {
	double a = 0, xn = 0, xn1 = 0;
	cin >> a;
	if (a < 0) {
		cout << "实数范围内不存在平方根" << endl;
		return 0;
	}
	else if (a == 0) {
		cout << "0" << endl;
		return 0;
	}
	else {
		xn = a;
		while (true) {
			xn1 = (xn + a / xn) / 2;
			if (abs(xn1 - xn) < 0.00001) {
				break;
			}
			else xn = xn1;
		}
		cout << xn1 << endl;
		return 0;
	}
}