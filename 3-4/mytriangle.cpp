#include<iostream>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1 && abs(side1 - side2) < side3 && abs(side1 - side3) < side2 && abs(side2 - side3) < side1) {
		if (side1 == side2 || side2 == side3 || side1 == side3) {
			return true;
		}
		else return false;
	}
	else return false;
};
double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
};