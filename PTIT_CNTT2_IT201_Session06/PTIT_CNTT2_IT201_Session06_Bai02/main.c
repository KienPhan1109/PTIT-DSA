#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1) printf("Số nhập vào phải là số nguyên!\n");
    } while (n < 1);

    for (int i = n; i >= 0; i--) {
        printf("%d ", fibonacci(i));
    }
}