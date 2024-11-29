#include<iostream>
#include<iomanip>
#include"mytriangle.h"
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		cout << "Size is: " << area(a, b, c);
	}
	else cout << "Not A Triangle";
	return 0;
}
