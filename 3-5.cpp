#include<iostream>
#include<iomanip>
using namespace std;
int eat(int num, int times) {
	if (times == 10) {
		num = (num + 1) * 2;
		return num;
	}
	num = (eat(num, times + 1) + 1) * 2;
	return num;
}
int main() {
	cout << "��һ��ժ��" << eat(1, 1) << "������";
	return 0;
}