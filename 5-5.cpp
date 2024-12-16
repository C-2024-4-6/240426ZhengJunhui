#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void setPoint(int i, int j) {
        x = x + i;
        y = y + j;
    }
    void display() {
        cout << "x= " << x << endl;
        cout << "y= " << y << endl;
    }
};
int main() {
    Point point1(60, 80);
    point1.setPoint(10, 20);
    point1.display();
    return 0;
}