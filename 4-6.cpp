#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            counts[s[i] - 65]++;
        }
        else {
            counts[s[i] - 97]++;
        }
    }
}
int main() {
    char s[100];
    int counts[26];
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    cout << "Enter a string:";
    fgets(s, sizeof(s), stdin);
    count(s, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << (char)(97 + i) << ":" << counts[i] << " times" << endl;
        }
    }
    return 0;
}