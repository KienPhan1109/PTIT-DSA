#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    do {
        printf("Nhập vào n: ");
        scanf("%d", &n);
        if (n < 1) printf("n phải là số nguyên!\n");
    } while (n < 1);

    int result = factorial(n);
    printf("Giai thừa của n là %d\n", result);
}