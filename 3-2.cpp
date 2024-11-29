#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}
void is_prime() {
    int count = 2;
    int row = 2;
    cout << "2 3 ";
    for (int i = 5; count < 200; i += 2) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            count++;
            row++;
            if (row == 10) {
                cout << endl;
                row = 0;
            }
        }
    }
    cout << endl;
}
int main() {
    int a = 0;
    cin >> a;
    if (is_prime(a) == 1) cout << "true" << endl;
    else cout << "false" << endl;
    is_prime();
    return 0;
}