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

    int value;
    printf("Nhập giá trị cần thêm: ");
    scanf("%d", &value);

    int pos;
    do {
        printf("Nhập vào vị trí cần xóa (0 - %d): ", n);
        scanf("%d", &pos);
        if (pos < 0 || pos > n)
            printf("Vị trí không hợp lệ! Vui lòng nhập lại.\n");
    } while (pos < 0 || pos > n);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++;

    printf("Mảng sao khi thêm là: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}