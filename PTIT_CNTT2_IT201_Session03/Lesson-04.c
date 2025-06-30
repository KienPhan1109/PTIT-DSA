#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int row, col;

    do
    {
        printf("Nhập số hàng: ");
        scanf("%d", &row);
        printf("Nhập số cột: ");
        scanf("%d", &col);
        if (row <= 0 || col <= 0 || row > 100 || col > 100) printf("Kích thước không hợp lệ, vui lòng nhập lại! \n");
    } while (row <= 0 || col <= 0 || row > 100 || col > 100);
    
    int **arr = malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        arr[i] = malloc(col * sizeof(int));
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Nhập phần tử [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma Trận \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max) max = arr[i][j]; 
            if (arr[i][j] < min) min = arr[i][j]; 
        }
    }
    
    printf("Phần tử lớn nhất trong ma trận là %d \n", max);
    printf("Phần tử nhỏ nhất trong ma trận là %d \n", min);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    
    free(arr);
    
    return 0;
}
