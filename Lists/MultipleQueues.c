#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE 10

typedef struct queue* queuePointer;
typedef struct queue {
	element data;
	queuePointer link;
};
queuePointer front[MAX_QUEUE], rear[MAX_QUEUE];

void addq(int i, element item);
element deleteq(int i);

int main() {
	;
}

void addq(int i, element item) {
	queuePointer temp;
	MALLOC(temp, sizeof(*temp));
	temp->data = item;
	temp->link = NULL;
	if (front[i])
		rear[i]->link = temp;
	else
		front[i] = temp;
	rear[i] = temp;
}

element deleteq(int i) {
	queuePointer temp = front[i];
	element item;
	if (!temp)
		return queueEmpty();
	item = temp->data;
	front[i] = temp->link;
	free(temp);
	return item;
}