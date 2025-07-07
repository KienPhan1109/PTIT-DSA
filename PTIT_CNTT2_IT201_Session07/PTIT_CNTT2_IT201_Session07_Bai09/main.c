#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSortUp(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void bubbleSortDown(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void sortSpecial(int* arr, int size) {
    int tempEven[size];
    int sizeEven = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            tempEven[sizeEven++] = arr[i];
        }
    }

    bubbleSortUp(tempEven, sizeEven);

    int tempOdd[size];
    int sizeOdd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            tempOdd[sizeOdd++] = arr[i];
        }
    }

    bubbleSortUp(tempOdd, sizeOdd);

    int index = 0;
    for (int i = 0; i < sizeEven; i++) {
        arr[index++] = tempEven[i];
    }

    for (int i = 0; i < sizeOdd; i++) {
        arr[index++] = tempOdd[i];
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

    printf("\n");
    sortSpecial(arr, n);

    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}