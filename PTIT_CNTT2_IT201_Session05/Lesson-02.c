#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Nhập vào n: ");
    scanf("%d", &n);

    int result = sum(n);
    printf("Tổng từ 1 - n là %d\n", result);
}