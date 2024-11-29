#include <stdio.h>
#include <string.h>
int indexOf(const char* s1, const char* s2);
int main() {
    char s1[100], s2[100];
    printf("请输入字符串s2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    printf("请输入字符串s1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    int index = indexOf(s1, s2);
    if (index != -1) {
        printf("字符串 \"%s\" 在字符串 \"%s\" 中的起始下标是: %d\n", s1, s2, index);
    }
    else {
        printf("字符串 \"%s\" 不是字符串 \"%s\" 的子串\n", s1, s2);
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