#include<iostream>
#include<iomanip>
using namespace std;
void sort(double num[]) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (num[j] > num[j + 1])
			{
				int cur = num[j];
				num[j] = num[j + 1];
				num[j + 1] = cur;
				changed = true;
			}
	} while (changed);
}
int main() {
	double num[10];
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	sort(num);
	for (int i = 0; i < 10; i++) {
		cout << num[i] << " ";
	}
	return 0;
}