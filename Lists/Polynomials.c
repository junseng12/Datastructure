#include<stdio.h>
#include<stdlib.h>

typedef struct polyNode* polyPointer;
typedef struct polyNode {
	int coef;
	int expon;
	polyPointer link;
};
polyPointer a, b;

polyPointer padd(polyPointer a, polyPointer b);
void attach(float coefficient, int exponent, polyPointer *ptr);
void erase(polyPointer* ptr);

int main() {
	;
}

polyPointer padd(polyPointer a, polyPointer b) {
	polyPointer c, rear, temp;
	int sum;
	MALLOC(rear, sizeof(*rear));
	c = rear;
	while (a && b) {
		switch (COMPARE(a->expon, b->expon)) {
		case -1:
			attach(b->coef, b->expon. & rear);
			b = b->link;
			break;
		case 0:
			sum = a->coef + b->coef;
			if (sum)
				attach(sum, a->expon, &rear);
			a = a->link; b = b->link;
			break;
		case 1:
			attach(a->coef, a->expon, &rear);
			a = a->link;

		}
	}

	for (; a; a = a->link) attach(a->coef, a->expon, &rear);
	for (; b; b = b->link) attach(b->coef, b->expon, &rear);
	rear->link = NULL;

	temp = c;	c = c->link;	free(temp);
	return c;
}

void attach(float coefficient, int exponent, polyPointer* ptr) {
	polyPointer temp;
	MALLOC(temp, sizeof(*ptr));

	temp->coef = coefficient;
	temp->expon = exponent;
	(*ptr)->link = temp;
	*ptr = temp;
}	

void erase(polyPointer* ptr) {
	polyPointer temp;
	while (*ptr) {
		temp = *ptr;
		*ptr = (*ptr)->link;
		free(temp);
	}
}
