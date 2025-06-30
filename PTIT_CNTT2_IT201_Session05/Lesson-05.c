#include <stdio.h>

int sum(int firstNum, int secondNum) {
    if (firstNum == secondNum || firstNum + 1 == secondNum || secondNum + 1 == firstNum) return 0;

    if (firstNum < secondNum) return (firstNum + 1 ) + sum(firstNum + 1, secondNum);
    else return (firstNum - 1) + sum(firstNum - 1, secondNum);
}

int main() {
    int firstNum, secondNum;
    do {
        printf("Nhập vào số thứ 1: ");
        scanf("%d", &firstNum);
        if (firstNum < 1) printf("Số thứ 1 phải là số nguyên!\n");
    } while (firstNum < 1);

    do {
        printf("Nhập vào số thứ 2: ");
        scanf("%d", &secondNum);
        if (secondNum < 1) printf("Số thứ 2 phải là số nguyên!\n");
    } while (secondNum < 1);

    int result = sum(firstNum, secondNum);
    printf("Giai thừa của n là %d\n", result);
}