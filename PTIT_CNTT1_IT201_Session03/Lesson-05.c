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

    if (row % 2 == 0 || col % 2 == 0) {
        printf("Không tồn tại đường chéo chính và phụ!");
        return 1;
    } 

    int mainCross = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j) mainCross += arr[i][j];
        }
    }

    int extraCross = 0;
    int i = 0;
    for (int j = col - 1; j >= 0; j--)
    {
        extraCross += arr[i][j];
        i++;
    }
    
    printf("Tổng đường chéo chính là %d \n", mainCross);
    printf("Tổng đường chéo phụ là %d", extraCross);

    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    
    free(arr);
    
    return 0;
}
