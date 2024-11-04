#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b;
	char m;
	cin >> a >> m >> b;
	if (m == '+') {
		cout << a + b;
	}
	else if (m == '-') {
		cout << a - b;
	}
	else if (m == '*') {
		cout << a * b;
	}
	else if (m == '/') {
		if (b == 0) cout << "除数不能为0" << endl;
		else cout << a / b;
	}
	else if (m == '%') {
		cout << a % b;
	}
	else {
		cout << "运算符非法" << endl;
	}
	return 0;
}