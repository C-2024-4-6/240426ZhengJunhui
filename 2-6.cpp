#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a, b, maxn, minn;
	cin >> a >> b;
	for (int i = 1; i <= b / 2; i++) {
		if (a % i == 0 && b % i == 0) {
			maxn = i;
		}
	}
	cout << "���Լ��Ϊ��" << maxn << endl;
	cout << "��С������Ϊ��" << (a * b) / maxn << endl;
	return 0;
}