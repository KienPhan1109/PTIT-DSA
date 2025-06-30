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
    printf("Nhập giá trị cần tìm: ");
    scanf("%d", &value);

    int found = 0;

    for (int i = n - 1; i >= 0 ; i--)
    {
        if (value == arr[i]) {
            printf("Phần tử %d có chỉ số %d", value, i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Không tìm thấy phần tử!");

    free(arr);
    return 0;
}
