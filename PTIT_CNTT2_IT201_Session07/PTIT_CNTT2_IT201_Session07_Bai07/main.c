#include <stdio.h>
#include <stdlib.h>

void customArr(int* arr, int size) {
    int* temp = (int*)malloc(size * sizeof(int));
    int idx = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[idx++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            temp[idx++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            temp[idx++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1 || n > 1000) printf("Số nhập vào phải nằm trong khoảng (1 - 1000)!\n");
    } while (n < 1 || n > 1000);

    int* arr = malloc(n * sizeof *arr);

    for (int i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mảng trước khi sắp xếp: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMảng sau khi sắp xếp: ");
    customArr(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
}