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
        int count = 1;
        int check = 0;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                check = 1;
                break;
            }            
        }
        
        if (check) continue;
        
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]) count++;
        }
        
        printf("Phần tử %d xuất hiện %d lần \n", arr[i], count);
    }
    
    free(arr);
    return 0;
}