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
	cout << "字母数量：" << alphabet << endl;
	cout << "空格数量：" << space << endl;
	cout << "数字数量：" << num << endl;
	cout << "其他字符数量：" << other << endl;
	return 0;
}