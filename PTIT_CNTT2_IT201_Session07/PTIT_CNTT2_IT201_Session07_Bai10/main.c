#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int abs(int x) {
    return x < 0 ? -x : x;
}

void sortSpecial(int* arr, int size, int x) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            int d1 = abs(arr[j] - x);
            int d2 = abs(arr[j + 1] - x);

            if (d1 > d2 || d1 == d2 && arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Input size array: ");
    scanf("%d", &n);

    int* arr = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        printf("Input array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int x;
    printf("\nInput element x: ");
    scanf("%d", &x);
    sortSpecial(arr, n, x);

    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}