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

    int average = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            average += arr[i];
            count++;
        }
    }

    printf("Trung bình cộng số chẵn trong mảng là %d", average / count);

    free(arr);
    return 0;
}
