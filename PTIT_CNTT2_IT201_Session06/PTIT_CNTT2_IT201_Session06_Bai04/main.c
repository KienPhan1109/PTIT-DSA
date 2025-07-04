#include <stdio.h>

void haNoiTower(int n, char source, char temp, char target) {
    if (n == 1) {
        printf("Đĩa 1 di chuyển từ %c sang %c\n", source, target);
        return;
    }

    haNoiTower(n - 1, source, target, temp);
    printf ("Đĩa %d di chuyển từ %c sang %c\n", n, source, target);
    haNoiTower(n - 1, temp, source, target);
}

int main() {
    int n;
    do {
        printf("Nhập vào số nguyên n: ");
        scanf("%d", &n);
        if (n < 1) printf("Số nhập vào phải là số nguyên!\n");
    } while (n < 1);

    haNoiTower(n, 'A', 'B', 'C');
}