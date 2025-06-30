#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

void toLowerStr(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void inputStudent(Student *student) {
    printf("Nhập vào ID Sinh Viên: ");
    scanf("%d", &student->id);
    getchar();

    printf("Nhập vào tên Sinh Viên: ");
    fgets(student->name, 100, stdin);
    student->name[strcspn(student->name, "\n")] = '\0';

    printf("Nhập vào tuổi Sinh Viên: ");
    scanf("%d", &student->age);
}

void displayStudent(Student student[], int size) {
    printf("\nThông tin toàn bộ Sinh Viên\n");
    for (int i = 0; i < size; i++) {
        printf("ID: %d  |  Name: %s  |  Age: %d\n", student[i].id, student[i].name, student[i].age);
    }
}

int main() {
    int n;
    printf("Nhập vào số lượng Sinh Viên: ");
    scanf("%d", &n);
    getchar();

    Student student[n];

    for (int i = 0; i < n; i++) {
        printf("Thông tin Sinh Viên thứ %d\n", i + 1);
        inputStudent(&student[i]);
    }

    displayStudent(student, n);

    getchar();
    char search[30];
    printf("\nNhập vào tên Sinh Viên cần tìm: ");
    fgets(search, 30, stdin);
    search[strcspn(search, "\n")] = '\0';

    toLowerStr(search);
    int found = 0;
    for (int i = 0; i < n; i++) {
        char tempName[100];
        strcpy(tempName, student[i].name);
        toLowerStr(tempName);

        if (strstr(tempName, search)) {
            printf("ID: %d  |  Name: %s  |  Age: %d\n", student[i].id, student[i].name, student[i].age);
            found = 1;
        }
    }

    if (!found) printf("Không tìm thấy sinh viên có tên %s", search);

    return 0;
}