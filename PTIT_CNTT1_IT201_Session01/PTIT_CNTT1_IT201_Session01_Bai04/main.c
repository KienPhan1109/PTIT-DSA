#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Cách 1
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);

    // Time Complexity O(n)
    // Space Complexity O(1)

    // Cách 2
    int sum2 = 0;
    int length = n;
    int j = 0;
    while (length > 0) {
        sum2 += arr[j];
        j++;
        length--;
    }
    printf("%d\n", sum2);

    // Time Complexity O(n)
    // Space Complexity O(1)

    return 0;
}
