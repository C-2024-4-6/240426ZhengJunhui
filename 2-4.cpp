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
		if (b == 0) cout << "��������Ϊ0" << endl;
		else cout << a / b;
	}
	else if (m == '%') {
		cout << a % b;
	}
	else {
		cout << "������Ƿ�" << endl;
	}
	return 0;
}