#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n) {
    int* arr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr = mallocArray(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", i);
    }

    free(arr);
}

// Space Complexity O(n)