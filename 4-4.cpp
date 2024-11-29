#include<iostream>
#include<iomanip>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int index1 = 0, index2 = 0, index = 0;
    while (index1 <= size1 - 1 && index2 <= size2 - 1) {
        if (list1[index1] <= list2[index2]) {
            list3[index] = list1[index1];
            index1++; index++;
        }
        else {
            list3[index] = list2[index2];
            index2++; index++;
        }
    }
    for (int i = index; i <= size1 + size2; i++) {
        if (index1 == size1) {
            list3[index] = list2[index2];
            index2++; index++;
        }
        else {
            list3[index] = list1[index1];
            index1++; index++;
        }
    }
}
int main() {
    int size1, size2;
    cin >> size1;
    int* list1 = new int[size1];
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }
    cin >> size2;
    int* list2 = new int[size2];
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }
    int* list3 = new int[size1 + size2];
    merge(list1, size1, list2, size2, list3);
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    delete list1, list2, list3;
    return 0;
}