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

    int maxCount = 0;
    int maxValue = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxValue = arr[i];
        }
    }
    
    printf("Phần tử xuất hiện nhiều nhất là %d (%d lần)", maxValue, maxCount);
    
    free(arr);
    return 0;
}