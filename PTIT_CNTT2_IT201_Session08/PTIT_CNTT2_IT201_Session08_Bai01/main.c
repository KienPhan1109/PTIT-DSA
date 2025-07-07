#include <stdio.h>
#include <stdlib.h>

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

    int search;
    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &search);

    linerSearch(arr, n, search);
    free(arr);
}