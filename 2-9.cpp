#include<iostream>
using namespace std;
int main() {
	int sum = 0, a = 2, day = 0;
	while (a <= 100) {
		day++;
		sum += a;
		a *= 2;
	}
	cout << (0.8 * sum) / day << endl;
	return 0;
}