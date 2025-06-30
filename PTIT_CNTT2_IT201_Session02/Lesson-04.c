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

    int pos;
    do {
        printf("Nhập vào vị trí cần sửa (0 - %d): ", n - 1);
        scanf("%d", &pos);
        if (pos < 0 || pos >= n)
            printf("Vị trí không hợp lệ! Vui lòng nhập lại.\n");
    } while (pos < 0 || pos >= n);

    int value;
    printf("Nhập vào giá trị mới: ");
    scanf("%d", &value);

    arr[pos] = value;

    printf("Mảng sao khi sửa là: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}