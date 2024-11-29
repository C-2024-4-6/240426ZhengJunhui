#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int parseHex(const char* const hexString) {
    int ans = 0, digit = 0;
    for (int i = strlen(hexString) - 2; i >= 0; i--) {
        int cur = 0;
        if (hexString[i] >= 65 && hexString[i] <= 90) {
            cur = hexString[i] - 55;
            for (int j = 0; j < digit; j++) {
                cur = cur * 16;
            }
        }
        else {
            cur = hexString[i] - 48;
            for (int j = 0; j < digit; j++) {
                cur = cur * 16;
            }
        }
        ans = ans + cur;
        digit++;
    }
    return ans;
}
int main() {
    char num[100];
    fgets(num, sizeof(num), stdin);
    cout << parseHex(num);
    return 0;
}