.#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
int main() {
	string str;
	getline(cin, str);
	int alphabet = 0, space = 0, num = 0, other = 0;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
			alphabet++;
		}
		else if (c == 32) {
			space++;
		}
		else if (c >= 48 && c <= 57) {
			num++;
		}
		else other++;
	}
	cout << "��ĸ������" << alphabet << endl;
	cout << "�ո�������" << space << endl;
	cout << "����������" << num << endl;
	cout << "�����ַ�������" << other << endl;
	return 0;
}