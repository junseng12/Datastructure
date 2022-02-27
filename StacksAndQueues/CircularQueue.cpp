#include<stdio.h>
//Circular Queue
#define MAX_QUEUE_SIZE 10
//element 구조체
typedef struct ElementClass {
    int key;
} element;
element queue[MAX_QUEUE_SIZE];

int front = 0, rear = 0;

void addq(element item);
element deleteq();
void queueFull(); //세부 변경 필요
element queueEmpty(); //세부 변경 필요

void addq(element item) {
    rear = (rear + 1) % MAX_QUEUE_SIZE;
    if (front == rear)
        queueFull(rear);
    queue[rear] = item;
}

element deleteq() {
    if (front == rear)
        return queueEmpty();
    front = (front + 1) % MAX_QUEUE_SIZE;
    return queue[front];
}

void queueFull() {
    printf("Queue is Full.");
    //오류 처리해야함
}

element queueEmpty() {
    element a = { -1 };
    printf("Queue is Empty.");
    //오류 처리해야함
    return a;
}#pragma once
