#include <stdio.h>

void display(int n) {
    if (n == 0) return;
    display(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;
    printf("Nhập vào n: ");
    scanf("%d", &n);

    display(n);
}