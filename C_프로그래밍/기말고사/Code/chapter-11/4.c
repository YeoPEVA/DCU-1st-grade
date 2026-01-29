#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LinkedList{
    char* name;
    char* phone;
    char* email;
    char* belong;
    char* position;
    struct LinkedList* next;
};

typedef struct LinkedList NODE;
typedef NODE* LINK;

LINK createNode(char* name, char* phone, char* email, char* belong, char* position);
LINK append(LINK head, LINK curr);
LINK delete(LINK head, char* del_phone);
LINK edited(LINK head, char* search_input);
LINK search(LINK head, int select, char* search_input);

int printList(LINK head, int select_input);
int countList(LINK head);

LINK createNode(char* name, char* phone, char* email, char* belong, char* position){
    LINK curr;
    curr = (LINK)malloc(sizeof(NODE));

    if(curr == NULL){
        printf("Memory allocation problem!\n");
        return NULL;
    }
    
    curr ->name = (char*)malloc(sizeof(char)*(strlen(name)+1));
    strcpy(curr->name, name);

    curr ->phone = (char*)malloc(sizeof(char)*(strlen(phone)+1));
    strcpy(curr->phone, phone);

    curr ->email = (char*)malloc(sizeof(char)*(strlen(email)+1));
    strcpy(curr->email, email);

    curr ->belong = (char*)malloc(sizeof(char)*(strlen(belong)+1));
    strcpy(curr->belong, belong);

    curr ->position = (char*)malloc(sizeof(char)*(strlen(position)+1));
    strcpy(curr->position, position);

    curr->next = NULL;
    return curr;
}

LINK append(LINK head, LINK curr) {
    if (head == NULL) {
        curr->next = head;
        head = curr;
        return curr;
    }

    LINK temp = head;
    
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = curr;
    
    return head;
}

LINK delete(LINK head, char* del_phone) {
    if (head == NULL) {
        return head; 
    }

    LINK temp = head, prev = NULL;

    while (temp != NULL && strcmp(temp->phone, del_phone) != 0) {
        prev = temp;
        temp = temp->next;
    }

    // 전화번호가 리스트에 없는 경우
    if (temp == NULL) {
        printf("해당 전화번호가 없습니다.\n");
        return head;
    }
   
    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    printf("----삭제된 연락처 정보----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 :%s, 직책 : %s\n", 
        temp->name, temp->phone, temp->email, temp->belong, temp->position);

    free(temp->name);
    free(temp->phone);
    free(temp->email);
    free(temp->belong);
    free(temp->position);
    free(temp);

    return head;
}

LINK edited(LINK head, char* search_input){
    char name[50];
    char phone[50];
    char email[50];
    char belong[50];
    char position[50];

    if(head == NULL){
        return head; 
    }

    LINK temp = head, prev = NULL;

    while (temp != NULL && strcmp(temp->phone, search_input) != 0) {
            prev = temp;
            temp = temp->next;
    }

    // 수정할 정보가 없음. 
    if (temp == NULL) {
        printf("해당 전화번호가 없습니다.\n");
        return head;
    }
    
    printf("----기존 연락처 정보----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 :%s, 직책 : %s\n", temp->name, temp->phone, temp->email, temp->belong, temp->position);

    printf("수정된 연락처 정보를 입력하세요.\n");
    
    printf("이름 >> ");
    scanf("%s", name);

    printf("전화번호 >> ");
    scanf("%s", phone);

    printf("이메일 주소 >> ");
    scanf("%s", email);

    printf("소속 >> ");
    scanf("%s", belong);

    printf("직책 >> ");
    scanf("%s", position);

    strcpy(temp->name, name);
    strcpy(temp->phone, phone);
    strcpy(temp->email, email);
    strcpy(temp->belong, belong);
    strcpy(temp->position, position);

    printf("----수정된 연락처 정보----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 :%s, 직책 : %s\n",name, phone, email, belong, position);

    return head;
}

LINK search(LINK head, int select, char* search_input){
    if(head == NULL){
        return head; 
    }

    LINK temp = head, prev = NULL;

    // [(1) 이름 (2) 전화번호 (3) 소속]

    if(select == 1){
        while (temp != NULL && strcmp(temp->name, search_input) != 0) {
            prev = temp;
            temp = temp->next;
        }

    }else if(select == 2){
        while (temp != NULL && strcmp(temp->phone, search_input) != 0) {
            prev = temp;
            temp = temp->next;
        }

    }else if(select == 3){
        while (temp != NULL && strcmp(temp->belong, search_input) != 0) {
            prev = temp;
            temp = temp->next;
        }
    }
    
    // 검색할 정보가 없음. 
    if (temp == NULL) {
        printf("검색결과가 없습니다.\n");
        return head;
    }

    printf("----검색 결과----\n");
    printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 : %s, 직책 : %s\n", 
        temp->name, temp->phone, temp->email, temp->belong, temp->position);

    return head;
}

void sortList(LINK head, int isNameSort) {
    if (head == NULL || head->next == NULL) {
        return; // 리스트가 비어 있거나 한 노드만 있는 경우
    }

    int swapped;
    LINK ptr1;
    LINK ptr2 = NULL;

    do {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != ptr2) {
            int shouldSwap = 0;
            if (isNameSort) {
                shouldSwap = strcmp(ptr1->name, ptr1->next->name) > 0;
            } else {
                shouldSwap = strcmp(ptr1->belong, ptr1->next->belong) > 0;
            }

            if (shouldSwap) {
                // 노드 데이터 교환
                char* tempName = ptr1->name;
                char* tempPhone = ptr1->phone;
                char* tempEmail = ptr1->email;
                char* tempBelong = ptr1->belong;
                char* tempPosition = ptr1->position;

                ptr1->name = ptr1->next->name;
                ptr1->phone = ptr1->next->phone;
                ptr1->email = ptr1->next->email;
                ptr1->belong = ptr1->next->belong;
                ptr1->position = ptr1->next->position;

                ptr1->next->name = tempName;
                ptr1->next->phone = tempPhone;
                ptr1->next->email = tempEmail;
                ptr1->next->belong = tempBelong;
                ptr1->next->position = tempPosition;

                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        ptr2 = ptr1;
    } while (swapped);
}


int printList(LINK head, int select_input) {

    

    if(select_input == 1){
        sortList(head, select_input); 
        printf("----이름 순 전체 연락처 출력----\n");
    }else if(select_input == 2){
        select_input = 0;
        sortList(head, select_input);
        printf("----소속 순 전체 연락처 출력----\n");
    }else{
        printf("잘못된 옵션입니다.\n");
        return 0;
    }

    LINK nextNode = head;

    while (nextNode != NULL) {
        printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 :%s, 직책 : %s\n", 
            nextNode->name, nextNode->phone, nextNode->email, nextNode->belong, nextNode->position);
        nextNode = nextNode->next;
    }

    return 0;
}


int countList(LINK head){
    int cnt = 0;
    LINK nextNode = head;
    while(nextNode !=NULL){
        ++cnt;
        nextNode = nextNode -> next;
    }
    return cnt;
}

int main(void) {
    char name[50];
    char phone[50];
    char email[50];
    char belong[50];
    char position[50];
    char search_input[50];

    int select_input;
    int select_space;
    int count;
    LINK head = NULL;
    LINK curr;

    while(1){
        printf("Select menu [(1) 연락처 추가 (2) 연락처 삭제 (3) 연락처 수정 (4) 검색 (5) 전체 연락처 출력 (6) 종료] : ");
        scanf("%d", &select_input);

        switch(select_input){
            case 1:
                printf("이름 >> ");
                scanf("%s", name);

                printf("전화번호 >> ");
                scanf("%s", phone);

                printf("이메일 주소 >> ");
                scanf("%s", email);

                printf("소속 >> ");
                scanf("%s", belong);

                printf("직책 >> ");
                scanf("%s", position);

                curr = createNode(name, phone, email, belong, position);
                head = append(head, curr);

                printf("----연락처가 추가되었습니다----\n");
                printf("이름 : %s, 전화번호 : %s, 이메일 주소 : %s, 소속 :%s, 직책 : %s\n",name, phone, email, belong, position);
                break;

            case 2:
                count = countList(head);

                if(count == 0){
                    printf("연락처가 비어있습니다.\n");
                }else{
                    printf("삭제할 전화번호를 입력하세요 >> ");
                    scanf("%s", search_input);
                    head = delete(head, search_input);
                }

                break;

            case 3:
                // 수정 -> 연락처
                count = countList(head);

                if(count == 0){
                    printf("연락처가 비어있습니다.\n");
                }else{
                    // search 
                    printf("수정할 전화번호를 입력하세요 >> ");
                    scanf("%s", search_input);
                    head = edited(head, search_input);
                }

                break;

            case 4:
                // 검색 
                count = countList(head);

                if(count == 0){
                    printf("연락처가 비어있습니다.\n");
                }else{
                    printf("검색 옵션 선택 [(1) 이름 (2) 전화번호 (3) 소속] : ");
                    scanf("%d", &select_input);
                    
                    printf("검색할 정보 입력 >> ");
                    scanf("%s", search_input);

                    search(head, select_input, search_input);
                }
                break;

            case 5:
                // 출력 - 이름, 소속 순 정렬 
                count = countList(head);

                if(count == 0){
                    printf("연락처가 비어있습니다.\n");
                }else{
                    printf("출력 옵션 선택 [(1) 이름 순 (2) 소속 순] : ");
                    scanf("%d", &select_input);
                    printList(head, select_input);
                }
                break;

            case 6:
                while (head != NULL) {
                    LINK temp = head;
                    head = head->next;
                    
                    free(temp->name);
                    free(temp->phone);
                    free(temp->email);
                    free(temp->belong);
                    free(temp->position);
                    free(temp);
                }

                return 0;

            default:
                printf("잘못된 옵션입니다.\n");
                break;
        }

    }

    return 0;
}