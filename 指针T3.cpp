#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void sorting(int* num, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (num[j - 1] > num[j]) {
                int cur = num[j - 1];
                num[j - 1] = num[j];
                num[j] = cur;
            }
        }
    }
}
int main() {
    int n = 0;
    cin >> n;
    int* num = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sorting(num, n);
    for (int i = 0; i < n; i++) {
        cout << *(num + i) << " ";
    }
    delete[] num;
    return 0;
}