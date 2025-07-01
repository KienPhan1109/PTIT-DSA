#include <stdio.h>
#include <string.h>

int isSymmetry(char str[], int left, int right) {
    if (left >= right) return 1;
    if (str[left] != str[right]) return 0;
    return isSymmetry(str, left + 1, right - 1);
}

int main() {
    char str[100];
    printf("Nhập vào chuỗi: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    if (isSymmetry(str, 0, len - 1)) printf("Palindrome valid\n");
    else printf("Palindrome invalid\n");

    return 0;
}