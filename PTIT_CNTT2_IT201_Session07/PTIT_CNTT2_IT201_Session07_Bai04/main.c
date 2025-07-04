#include <stdio.h>
#include <string.h>

void sortString(char* str, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];
    printf("Nhập vào chuỗi ký tự: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = NULL;

    int len = strlen(str);

    printf("Chuỗi trước khi sắp xếp: ");
    printf("%s\n", str);

    sortString(str, len);
    printf("\nChuỗi sau khi sắp xếp: ");
    printf("%s\n", str);
}