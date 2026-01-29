#include <stdio.h>
#include <stdlib.h>

struct LinkedList {
    int data;
    struct LinkedList* next;
};

typedef struct LinkedList NODE;
typedef NODE* LINK;

LINK createNode(int data);
LINK append(LINK head, LINK curr, int position);
LINK delete(LINK head, int position);
int printList(LINK head);
int countList(LINK head);

LINK createNode(int data) {
    LINK curr;
    curr = (LINK)malloc(sizeof(NODE));
    if (curr == NULL) {
        printf("Memory allocation problem!\n");
        return NULL;
    }
    curr->data = data;
    curr->next = NULL;
    return curr;
}

LINK append(LINK head, LINK curr, int position) {
    if (head == NULL || position == 1) {
        curr->next = head;
        head = curr;
        return head;
    }

    LINK temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    curr->next = temp->next;
    temp->next = curr;

    return head;
}

LINK delete(LINK head, int position) {
    if (head == NULL) {
        // printf("List is empty.\n");
        return NULL;
    }

    LINK temp = head;
    if (position == 1) {
        head = temp->next;
        printf("Node #%d %d is delete!\n", position, temp->data);
        free(temp);
        return head;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    LINK toDelete = temp->next;
    temp->next = toDelete->next;
    printf("Node #%d %d is delete!\n", position, toDelete->data);
    free(toDelete);

    return head;
}

int printList(LINK head) {
    int cnt = 0;
    LINK nextNode = head;
    while (nextNode != NULL) {
        printf("Node #%d is %d\n", ++cnt, nextNode->data);
        nextNode = nextNode->next;
    }
    return cnt;
}

int countList(LINK head) {
    int cnt = 0;
    LINK nextNode = head;
    while (nextNode != NULL) {
        ++cnt;
        nextNode = nextNode->next;
    }
    return cnt;
}

int main(void) {
    int data;
    int select_input;
    int select_space;
    int count;
    LINK head = NULL;
    LINK curr;

    while (1) {
        printf("Select menu [(1) append (2) delete (3) exit program] : ");
        scanf("%d", &select_input);

        switch (select_input) {
            case 1:
                printf("Input data >> ");
                scanf("%d", &data);
                count = countList(head);

                printf("input location (1 ~ %d) >> ", count + 1);
                scanf("%d", &select_space);

                curr = createNode(data);
                head = append(head, curr, select_space);
                printList(head);
                break;

            case 2:
                count = countList(head);
                if (count == 0) {
                    printf("List is Empty!\n");
                } else {
                    printf("delete location (1 ~ %d) >> ", count);
                    scanf("%d", &select_space);
                    head = delete(head, select_space);
                    printList(head);
                }
                break;

            case 3:
                return 0;
            default:
                printf("Enter the right number!\n");
                break;
        }
    }

    return 0;
}