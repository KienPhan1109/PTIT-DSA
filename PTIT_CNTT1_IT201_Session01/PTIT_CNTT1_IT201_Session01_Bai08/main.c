#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        do {
            scanf("%d", &arr[i]);
            if (arr[i] < 0 || arr[i] > 1000) printf("error\n");
        } while (arr[i] < 0 || arr[i] > 1000);
    }

    int maxCount = 0;
    int maxCountValue = 0;
    for (int i = 0; i < n - 1; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                if (count > maxCount) {
                    maxCount = count;
                    maxCountValue = arr[i];
                }
            }
        }
    }
    printf("%d\n", maxCountValue);
    // Time Complexity O(n^2)
    // Space Complexity O(1)

    return 0;
}
