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

    int search;
    printf("Nhập vào phần tử cần tìm: ");
    scanf("%d", &search);
    
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Phần tử %d có chỉ số %d", search, i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Không tìm thấy phần tử %d trong mảng!", search);

    free(arr);
    return 0;
}
