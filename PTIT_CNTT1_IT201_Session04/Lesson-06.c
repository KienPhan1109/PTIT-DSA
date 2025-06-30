#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50

typedef struct
{
    int id;
    char name[MAX_NAME];
    int age;
} Student;

int main() {
    int n;

    do {
        printf("Nhập vào số lượng sinh viên: ");
        scanf("%d", &n);
        if (n <= 0 || n > 100) printf("Số nhập vào không hợp lệ! \n");
    } while (n <= 0 || n > 100);

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nThông tin sinh viên thứ %d \n", i + 1);
        printf("Nhập vào ID sinh viên: ");
        scanf("%d", &students[i].id);
        printf("Nhập vào tên sinh viên: ");
        scanf(" %[^\n]", &students[i].name);
        printf("Nhập vào tuổi sinh viên: ");
        scanf("%d", &students[i].age);
    }

    printf("\nThông tin toàn bộ sinh viên\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nID: %d  |  Name: %s |  Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
    
    int found = 0;

    int searchID;
    printf("Nhập vào ID sinh viên cần tìm: ");
    scanf("%d", &searchID);

    for (int i = 0; i < n; i++)
    {
        if (students[i].id == searchID)
        {
            printf("\nĐã tìm thấy sinh viên\n");
            printf("ID: %d  |  Name: %s |  Age: %d\n", students[i].id, students[i].name, students[i].age);
            found = 1;
            break;
        }
    }
    if (!found) printf("Id sinh viên không tồn tại!");
    
    return 0;
}
