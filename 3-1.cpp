#include<iostream>
#include<iomanip>
using namespace std;
int func(int m, int n) {
	int i = 1, ans = 1;
	while (i <= m && i <= n) {
		if (m % i == 0 && n % i == 0)
			ans = i;
		i++;
	}
	return ans;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << "最大公约数为" << func(m, n) << endl;
	cout << "最小公倍数为" << m * n / func(m, n) << endl;
	return 0;
}