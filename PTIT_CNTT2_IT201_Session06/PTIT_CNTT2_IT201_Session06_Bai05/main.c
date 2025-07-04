#include <stdio.h>
#include <stdlib.h>

void findMinMax(int* arr, int size, int index, int* min, int* max) {
    if (index == size) return;

    if (arr[index] < *min) *min = arr[index];
    if (arr[index] > *max) *max = arr[index];

    findMinMax(arr, size, index + 1, min, max);
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1) printf("Số nhập vào phải là số nguyên!\n");
    } while (n < 1);

    int *arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    findMinMax(arr, n, 1, &min, &max);

    printf("Giá trị nhỏ nhất là %d\n", min);
    printf("Giá trị lớn nhất là %d\n", max);
}