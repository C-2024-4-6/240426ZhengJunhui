#include<iostream>
using namespace std;
#define PI 3.1415926
int main()
{
	double r, h;
	cin >> r >> h;
	cout << PI * r * r * h / 3;
	return 0;
}