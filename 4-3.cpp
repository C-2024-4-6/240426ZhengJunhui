#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    bool chest[101];
    for (int i = 1; i <= 100; i++) {
        chest[i] = false;
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = i; j <= 100; j += i) {
            chest[j] = !chest[j];
        }
    }
    for (int i = 1; i <= 100; i++) {
        if (chest[i] == true) cout << "L" << i << " ";
    }
    return 0;
}