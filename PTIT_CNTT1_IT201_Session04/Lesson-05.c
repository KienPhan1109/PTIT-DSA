#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    do {
        printf("Nhập vào số lượng phần tử: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) printf("Số nhập vào không hợp lệ! \n");
    } while (n <= 0 || n > 100);

    int *arr = malloc(n * sizeof *arr);

    for (int i = 0; i < n; i++) {
        printf("Nhập vào phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; i++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    int value;
    printf("Nhập giá trị cần tìm: ");
    scanf("%d", &value);

    int found = 0;
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid]  == value)
        {
            printf("Phần tử %d có trong mảng", value);
            found = 1;
            break;
        } else if (arr[mid] < value)
        {
            left = mid + 1;
        } else {
            right = mid - 1;
        }       
    }
    
    if (!found) printf("Không tìm thấy phần tử %d!", value);

    free(arr);
    return 0;
}
