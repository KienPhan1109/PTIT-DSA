#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int n) {
    if (n == 0) return 0;
    return sum(arr, n - 1) + arr[n - 1];
}

int main() {
    int n;

    do {
        printf("Nhập vào số lượng phần tử: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) printf("Số nhập vào không hợp lệ! \n");
    } while (n <= 0 || n > 100);

    int *arr = malloc(n * sizeof *arr);

    for (int i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int result = sum(arr, n);

    printf("Result: %d\n", result);

    free(arr);
    return 0;
}
