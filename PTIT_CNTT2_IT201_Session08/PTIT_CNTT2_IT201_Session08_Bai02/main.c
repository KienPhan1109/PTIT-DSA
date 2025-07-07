#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int search;
    printf("\nNhập phần tử cần tìm: ");
    scanf("%d", &search);

    binarySearch(arr, n, search);
    free(arr);
}