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

    // Cách 1
    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) found = 1;
        }
    }
    if (found) printf("True\n");
    else printf("False\n");
    // Time Complexity O(n^2)
    // Space Complexity O(1)

    // Cách 2
    int found2 = 0;
    int freq[1001] = {0};

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            printf("True\n");
            found2 = 1;
            return 0;
        }
        freq[arr[i]] = 1;
    }
    if (!found2) printf("False\n");

    // Time Complexity O(n)
    // Space Complexity O(k) với k = miền giá trị (0 → 1000)
    return 0;
}
