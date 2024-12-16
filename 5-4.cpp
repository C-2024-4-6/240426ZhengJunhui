#include <iostream>
using namespace std;
class Student {
public:
    int id;
    float score;
    Student(int i = 0, float s = 0.0) {
        this->id = i;
        this->score = s;
    }
};
void max(Student* students[], int size) {
    float maxScore = -1;
    int maxIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (students[i]->score > maxScore) {
            maxScore = students[i]->score;
            maxIndex = i;
        }
    }
    cout << "成绩最高的学号： " << students[maxIndex]->id << endl;
}
int main() {
    Student students[5] = {
        Student(1, 85.5),
        Student(2, 90.0),
        Student(3, 78.9),
        Student(4, 92.3),
        Student(5, 88.8)
    };
    Student* studentsPtr[5];
    for (int i = 0; i < 5; ++i) {
        studentsPtr[i] = &students[i];
    }
    max(studentsPtr, 5);
    return 0;
}