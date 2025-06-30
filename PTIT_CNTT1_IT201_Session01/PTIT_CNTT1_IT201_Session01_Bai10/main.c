#include <stdio.h>
#include <string.h>

void sortString(int str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int checkString(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) return 0;

    char str2_copy[100];
    strcpy(str2_copy, str2);

    for (int i = 0; str1[i] != '\0'; i++) {
        int found = 0;
        for (int j = 0; str2_copy[j] != '\0'; j++) {
            if (str1[i] == str2_copy[j]) {
                str2_copy[j] = '*';
                found = 1;
                break;
            }
        }
        if (!found) return 0;
    }

    return 1;
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter string 1: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter string 2: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // Cách 1
    char copy1[100], copy2[100];
    strcpy(copy1, str1);
    strcpy(copy2, str2);

    sortString(copy1);
    sortString(copy2);

    if (strcmp(copy1, copy2) == 0) printf("True\n");
    else printf("False\n");

    // Time Complexity O(n^2)
    // Space Complexity O(1)

    // Cách 2
    if (checkString(str1, str2)) printf("True\n");
    else printf("False\n");

    // Time Complexity O(n^2)
    // Space Complexity O(n)

    return 0;
}
