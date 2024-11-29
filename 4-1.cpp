#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int num[10], a, index = 1;
    cin >> a;
    for (int i = 0; i < 10; i++) {
        num[i] = a;
    }
    for (int i = 1; i <= 9; i++) {
        int cur;
        bool again = false;
        cin >> cur;
        for (int j = 0; j < index; j++) {
            if (num[j] == cur) {
                again = true;
                break;
            }
        }
        if (again == false) {
            num[index] = cur;
            index++;
        }
    }
    for (int i = 0; i < index; i++) {
        cout << num[i] << " ";
    }
    return 0;
}