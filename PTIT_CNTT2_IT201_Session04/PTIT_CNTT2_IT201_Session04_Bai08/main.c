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

    int found = 0;
    int searchValue;
    printf("Nhập phần tử cần tìm kiếm: ");
    scanf("%d", &searchValue);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchValue)
        {
            printf("%d ", i);
            found = 1;
        }
    }
    

    if (!found) printf("Phần tử không có trong mảng!");

    free(arr);
    return 0;
}
