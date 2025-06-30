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
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j]) {
            printf("Cặp đối xứng (%d, %d)\n", arr[i], arr[j]);
            found = 1;
        }
        i++;
        j--;
    }

    if (!found) printf("Không có phần tử đối xứng!");

    free(arr);
    return 0;
}
