#include<stdio.h>
#include<stdlib.h>

#define  MAX_STACK_SIZE 100
typedef struct ElementClass {
	int key;
} element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element item);
void stackFull();
element pop();
element stackEmpty();

//int main() {
//	element e, f;
//
//	e.key = 3;	push(e);
//	e.key = 2;	push(e);
//	f = pop();
//	printf("%d %d\n", top, f.key);
//
//	return 0;
//}

void push(element item) {
	if (top >= MAX_STACK_SIZE - 1) {
		stackFull();
		return;
	}
	stack[++top] = item;
}

void stackFull() {
	printf("Stack is Full.");
}

element stackEmpty() {
	printf("Stack is Empty.");
}

element pop() {
	if (top == -1)
		return stackEmpty();
	return stack[top--];
}
