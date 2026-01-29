#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define MAX_QUEUE_SIZE 5 // 큐의 최대 크기 정의

typedef struct Node{
    int data;
    struct Node* next;
} Node;

typedef struct Queue{
    Node* front;
    Node* rear;
    int count;
} Queue;

void InitQueue(Queue* queue);
int IsEmpty(Queue* queue);
void Enqueue(Queue* queue, int data);
int Dequeue(Queue* queue);

void InitQueue(Queue* queue){
    queue->front = queue->rear = NULL;
    queue->count = 0;
}

int IsEmpty(Queue* queue){
    return !queue->count;
}

void Enqueue(Queue* queue, int data){
    if(queue->count >= MAX_QUEUE_SIZE) { // 큐가 가득 찼는지 확인
        printf("Queue is full. (%d) is not enqueued.\n", data);
        return;
    }
    Node* now = (Node*)malloc(sizeof(Node));
    now->data = data;
    now->next = NULL;
    if(IsEmpty(queue)){
        queue->front = now;
    }else{
        queue->rear->next = now;
    }
    queue->rear = now;
    queue->count++;
}

int Dequeue(Queue* queue){
    int re = 0;
    Node* now;
    if(IsEmpty(queue)){
        return re;
    }
    now = queue->front;
    re = now->data;
    queue->front = now->next;
    free(now);
    queue->count--;
    return re;
}

int main() {
    Queue queue;
    InitQueue(&queue);

    int select;
    int i;

    while(1){
        printf("Select menu [(1) enqueue (2) dequeue (3) exit program] : ");
        scanf("%d", &select);

        switch(select) {
            case 1:
                printf("Input number : ");
                scanf("%d", &i);
                Enqueue(&queue, i);
                break;
            case 2:
                i = Dequeue(&queue);
                if(i == 0){
                    printf("Queue is empty.\n");
                }else{
                    printf("(%d) is dequeued.\n", i);
                }
                break;
            case 3:
                return 0;
        }
    }
    return 0;
}