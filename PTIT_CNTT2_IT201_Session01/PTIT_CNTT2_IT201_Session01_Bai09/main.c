#include <stdio.h>

void displayMatrix(int row, int col, int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void mainCrossMatrix(int row, int col, int arr[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) printf("%d ", arr[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int row, col;
    scanf("%d", &row);
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    displayMatrix(row, col, arr);
    // Time Complexity O(row * col)
    // Space Complexity O(row * col)

    if (row == col) mainCrossMatrix(row, col, arr);
    else printf("False\n");

    // Time Complexity O(row * col)
    // Space Complexity O(1)

    return 0;
}
