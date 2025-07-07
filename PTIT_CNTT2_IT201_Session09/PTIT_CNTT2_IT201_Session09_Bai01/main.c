#include <stdio.h>
#include <stdlib.h>

// Cấu trúc một nút trong danh sách liên kết đơn
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Hàm tạo một nút mới
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Không đủ bộ nhớ để cấp phát!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Hàm thêm nút vào cuối danh sách
void appendNode(Node** head, int value) {
    Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Hàm in danh sách
void printList(Node* head) {
    printf("Danh sách liên kết: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Hàm giải phóng bộ nhớ
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    // Nhập 5 phần tử bất kỳ
    for (int i = 0; i < 5; i++) {
        int value;
        printf("Nhập giá trị phần tử %d: ", i + 1);
        scanf("%d", &value);
        appendNode(&head, value);
    }

    printList(head);
    freeList(head);

    return 0;
}
