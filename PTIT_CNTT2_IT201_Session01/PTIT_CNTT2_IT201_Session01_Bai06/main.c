#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int search;
    int count = 0;
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++;
        }
    }

    printf("%d\n", count);
    // Time Complexity O(n)
    // Space Complexity O(1)

    return 0;
}
