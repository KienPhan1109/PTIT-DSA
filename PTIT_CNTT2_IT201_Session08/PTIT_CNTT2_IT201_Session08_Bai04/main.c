#include <stdio.h>
#include <stdlib.h>

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
}