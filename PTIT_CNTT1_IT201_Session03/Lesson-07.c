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
        if (row <= 0 || col <= 0 || row > 1000 || col > 1000) printf("Kích thước không hợp lệ, vui lòng nhập lại! \n");
    } while (row <= 0 || col <= 0 || row > 1000 || col > 1000);
    
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

    int countRow;
    printf("Nhập vào hàng cần tính tổng: ");
    scanf("%d", &countRow);

    if (countRow > row || countRow < 1)
    {
        printf("Hàng cần tính không tồn tại!");
        return 1;
    }

    int sum = 0;

    for (int j = 0; j < col; j++)
    {
        sum += arr[countRow - 1][j];
    }
    
    printf("Hàng cần tính có tổng là %d", sum);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    
    free(arr);
    
    return 0;
}
