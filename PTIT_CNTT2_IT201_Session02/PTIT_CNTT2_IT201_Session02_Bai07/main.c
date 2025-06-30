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
    int found = 0;

    printf("Nhập giá trị:  ");
    scanf("%d", &value);

    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == value) {
                found = 1;
                printf("%d + %d = %d \n", arr[i], arr[j], value);
                break;
            }
        }
    }

    if (!found) printf("Không tìm thấy!");

    free(arr);
    return 0;
}