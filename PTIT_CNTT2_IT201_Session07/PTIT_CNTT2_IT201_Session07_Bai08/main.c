#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void sortColInMatrix(int row, int col, int arr[row][col], int k) {
    if (k < 1 || k > col) {
        printf("Error!\n");
        return;
    }

    int temp[row];

    for (int i = 0; i < row; i++) {
        temp[i] = arr[i][k - 1];
    }

    bubbleSort(temp, row);

    for (int i = 0; i < row; i++) {
        arr[i][k - 1] = temp[i];
    }
}

int main() {
    int row, col;

    printf("Input Row: ");
    scanf("%d", &row);
    printf("Input Col: ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Input [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int k;
    printf("Input col to sort: ");
    scanf("%d", &k);

    sortColInMatrix(row, col, arr, k);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}