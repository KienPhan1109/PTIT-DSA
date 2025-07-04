#include <stdio.h>

void binaryNum(int n) {
    if (n == 0) return;
    binaryNum(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1) printf("Số nhập vào phải là số nguyên!\n");
    } while (n < 1);

    printf("Số %d sau khi chuyển sang hệ nhị phân là: ", n);
    binaryNum(n);
}