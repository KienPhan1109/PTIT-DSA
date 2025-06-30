#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

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

    
    printf("Mảng trước khi thêm phần tử \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhập số lượng phần tử cần thêm: ");
    scanf("%d", &m);

    int *newArr = realloc(arr, (n + m) * sizeof(int));
    
    arr = newArr;

    for (int i = n; i < n + m; i++)
    {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Mảng sau khi thêm phần tử \n");
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}