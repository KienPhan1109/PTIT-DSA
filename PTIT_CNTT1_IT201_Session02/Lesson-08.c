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

    for (int i = 0; i < n; i++)
    {
        int found = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                found = 0;
                break;
            }
        }
        if (found) printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}