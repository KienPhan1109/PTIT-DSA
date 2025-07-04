#include <stdio.h>
#include <stdlib.h>

int countWays(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1) printf("Số nhập vào phải là số nguyên!\n");
    } while (n < 1);

    int result = countWays(n);
    printf("Tổng số cách leo: %d\n", result);
}