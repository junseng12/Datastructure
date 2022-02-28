#include<stdio.h>
#include<stdlib.h>

#define MAX_STACKS 10

typedef struct {
	int key;
	// other fields
} element;

typedef struct stack* stackPointer;
typedef struct stack {
	element data;
	stackPointer link;
};
stackPointer top[MAX_STACKS];

void push(int i, element item);
element pop(int i);

int main() {
	;
}

void push(int i, element item) {
	stackPointer temp;
	MALLOC(temp, sizeof(*temp));
	temp->data = item;
	temp->link = top[i];
	top[i] = temp;
}

element pop(int i) {
	stackPointer temp = top[i];
	element item;
	if (!temp)
		return stackEmpty();
	item = temp->data;
	top[i] = temp->link;
	free(temp);
	return item;
}