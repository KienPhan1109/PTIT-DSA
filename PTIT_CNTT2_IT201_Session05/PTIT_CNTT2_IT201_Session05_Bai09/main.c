#include <stdio.h>

int countPaths(int r, int c, int row, int col) {
    if (r == row - 1 || c == col - 1) return 1; // Base case nếu ở biên cuối
    return countPaths(r + 1, c, row, col) + countPaths(r, c + 1, row, col);
}
int main() {
    int row, col;
    printf("Nhập vào số hàng: ");
    scanf("%d", &row);
    printf("Nhập vào số cột: ");
    scanf("%d", &col);

    printf("Tổng số đường đi từ (0, 0) đến (%d, %d) là %d\n", row - 1, col - 1, countPaths(0, 0, row, col));
    return 0;
}
// Ý tưởng ban đầu
// Base case là giới hạn cuối cùng của đường đi tức ở biên cuối bên phải hoặc bên dưới
// Đệ quy lại với sang phải + 1 + xuống dưới + 1

