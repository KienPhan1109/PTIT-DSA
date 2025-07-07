#include <stdio.h>
#include <stdlib.h>

void insertionSort(int* arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void linerSearch(int* arr, int size, int target) {
    int check = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Phần tử %d nằm ở vị trí thứ %d", target, i + 1);
            check = 1;
        }
    }
    if (!check) printf("Không tìm thấy phần tử!");
}

void binarySearch(int* arr, int size, int target) {
    int left =0, right = size - 1;
    int check = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            printf("Phần tử %d nằm ở vị trí thứ %d", target, mid + 1);
            check = 1;
            break;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else left = mid + 1;
    }
    if (!check) printf("Không tìm thấy phần tử!");
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTìm kiếm tuyến tính!\n");
    int search;
    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &search);

    linerSearch(arr, n, search);

    printf("\n\nTìm kiếm nhị phân!");
    int search1;
    printf("\nNhập phần tử cần tìm: ");
    scanf("%d", &search1);

    binarySearch(arr, n, search1);

    free(arr);
}