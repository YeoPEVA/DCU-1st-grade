#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


typedef struct Stack {
    Node* top;
} Stack;

void initStack(Stack* stack) {
    stack->top = NULL;
}

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
    printf("(%d) push\n", data);
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("queue is Empty!\n");
        return -1;
    }
    Node* temp = stack->top;
    int data = temp->data;
    stack->top = temp->next;
    free(temp);
    printf("(%d) pop\n", data);
    return data;
}

int main() {
    Stack stack;
    initStack(&stack);

    int choice, data;

    while (1) {
        printf("Select menu [(1) push (2) pop (3) exit program] : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("push data >> ");
                scanf("%d", &data);
                push(&stack, data);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                return 0;
            default:
                printf("Enter the right number!\n");
        }
    }

    return 0;
}
