#include <stdio.h>
#include <stdlib.h>

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

    int minValue = arr[0];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minValue) {
            minValue = arr[i];
            index = i;
        }
    }
    printf("Phần tử nhỏ nhất là %d có chỉ số %d", minValue, index);

    free(arr);
    return 0;
}
