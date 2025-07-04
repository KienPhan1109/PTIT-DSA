#include <stdio.h>

int sumNumber(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumNumber(n / 10);
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1) printf("Số nhập vào phải là số nguyên!\n");
    } while (n < 1);

    printf("Tổng các chữ số của %d là %d", n, sumNumber(n));
}