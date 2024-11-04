#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, b, c;
	cout << a + b + c << endl;
	if (a + b > c && a + c > b && b + c > a && abs(a - b) < c && abs(a - c) < b && abs(b - c) < a) {
		if (a == b || b == c || a == c) {
			cout << "yes" << endl;
		}
		else cout << "no" << endl;
	}
	else cout << "no" << endl;
	return 0;
}