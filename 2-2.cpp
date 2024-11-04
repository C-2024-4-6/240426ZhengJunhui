#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double num;
	cin >> num;
	if (num > 0 && num < 1) {
		cout << 3 - 2 * num;
	}
	else if (num >= 1 && num < 5) {
		cout << 2 / (4 * num) + 1;
	}
	else if (num >= 5 && num < 10) {
		cout << num * num;
	}
}