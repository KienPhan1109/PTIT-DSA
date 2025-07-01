#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Hàm kiểm tra chữ số
int isValid(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i])) return 0;
    }
    return 1;
}

int stringToInt(char str[], int len) {
    if (len == 0) return 0;
    return stringToInt(str, len - 1) * 10 + (str[len - 1] - '0');
}

int main() {
    char str[100];
    printf("Nhập vào chuỗi số: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    if (!isValid(str)) {
        printf("Dữ liệu nhập vào không hợp lệ!");
        return 0;
    }

    int len = strlen(str);
    int result = stringToInt(str, len);

    printf("Chuỗi sau khi chuyển đổi: \n");
    printf("%d\n", result);

    int temp = result + 1000;
    printf("Cộng thêm số để kiểm tra: %d", temp);
    return 0;
}
// Ý tưởng ban đầu
// Với mã ASCII -48 để chuyển từ chữ số thành số
// for (int i = 0; i < strlen(str); i++) {
//     int num = str[i] - 48;
//     printf("%d ", num);
// }

