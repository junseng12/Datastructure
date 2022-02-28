#include<stdio.h>
#include<stdlib.h>

void insert50(listPointer* first, listPointer x);
void delete(listPointer* first, listPointer trail, listPointer x);

int main() {
	;
}

void insert50(listPointer* first, listPointer x) {
	listPointer temp; 
	MALLOC(temp, sizeof(*temp));
	temp->data = 50;
	if (*first) {
		temp->link = x->link;
		x->link = temp;
	}
	else {
		temp->link = NULL;
		*first = temp;
	}
}

void delete(listPointer* first, listPointer trail, listPointer x) {
	if (trail)
		trail->link = x->link;
	else
		*first = (*first)->link;
	free(x);
}