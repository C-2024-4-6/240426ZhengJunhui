#include <iostream> 
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
	double volumn;
public:
	Cuboid(double length, double width, double height) {
		this->length = length;
		this->width = width;
		this->height = height;
	};
	~Cuboid() {
	};
	void vol() {
		this->volumn = length * width * height;
	};
	void print() {
		cout << "The volumn of this Cuboid is: " << volumn << endl;
	};
};
int main()
{
	Cuboid cub1(12, 16, 20);
	Cuboid cub2(2, 5, 8);
	Cuboid cub3(14, 7, 9);
	cub1.vol();
	cub1.print();
	cub2.vol();
	cub2.print();
	cub3.vol();
	cub3.print();
	return 0;
}