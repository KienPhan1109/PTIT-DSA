#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);
        }
    }
}

int binarySearch(int *arr, int left, int right, int value) {
    if (left > right) return -0;

    int mid = (left + right) / 2;

    if (arr[mid] == value) return 1;
    else if (value < arr[mid])
        return binarySearch(arr, left, mid - 1, value);
    else
        return binarySearch(arr, mid + 1, right, value);
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

    sortArray(arr, n);

    int searchValue;
    printf("Nhập phần tử cần tìm kiếm: ");
    scanf("%d", &searchValue);

    if (binarySearch(arr, 0, n - 1, searchValue)) printf("Phần tử có trong mảng!\n");
    else printf("Phần tử không tồn tại trong mảng!\n");

    free(arr);
    return 0;
}
