#include <stdio.h>
#include <string.h>
int indexOf(const char* s1, const char* s2);
int main() {
    char s1[100], s2[100];
    printf("�������ַ���s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    printf("�������ַ���s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    int index = indexOf(s1, s2);
    if (index != -1) {
        printf("�ַ��� \"%s\" ���ַ��� \"%s\" �е���ʼ�±���: %d\n", s1, s2, index);
    }
    else {
        printf("�ַ��� \"%s\" �����ַ��� \"%s\" ���Ӵ�\n", s1, s2);
    }

    return 0;
}
int indexOf(const char s1, const char s2) {
    const char* ptr = strstr(s2, s1);
    if (ptr != NULL) {
        return ptr - s2;
    }
    else {
        return -1;
    }
}