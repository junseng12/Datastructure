#include<stdio.h>
#include<stdlib.h>

#define MAX_STACK_SIZE 100

typedef struct {
	short int vert;
	short int horiz;
} offsets;

typedef struct {
	short int vert;
	short int horiz;
	short int dir;
} element;

element stack[MAX_STACK_SIZE];
offsets move[8];
int maze[MAX_ROWS][MAX_COLS];
int mark[MAX_ROWS][MAX_COLS];
int top;

nextRow = row + move[dir].vert;
nextCol = col + move[dir].horiz;

//while (stack is not empty) {
//	< row, col, dir > = delete from top of stack; //pop
//	while (threre are more moves from current position) {
//		dir = direction of move;
//		<nextRow, nextCol> = coordinate of next move;
//		if ((nextRow == EXIT_ROW) && (nextCol == EXIT_COL))
//			success;
//		if ((maze[nextRow][nextCol] == 0) && (mark[nextRow][nextCol]) == 0) {
//			mark[nextRow][nextCol] = 1;
//			add <row, col, next dir> to the top of the stack;
//			row = nextRow;
//			col = nextCol;
//			dir = north;
//		}
//	}
//}
//printf("No path found");

void path() {
	int i; int row; int col; int nextRow; int nextCol; int dir; int found = FALSE;
	element position;

	mark[1][1] = 1; top = 0;
	stack[0].row = 1; stack[0].col = 1; stack[0].dir = 1;

	while (top > -1 && !found) {
		position = pop();
		row = position.row;
		col = position.col;
		dir = position.dir;

		while (dir < 8 && !found) {
			nextRow = row + move[dir].vert;
			nextCol = col + move[dir].horiz;
			
			if (nextRow == EXIT_ROW && nextCol == EXIT_COL)
				found = TRUE;
			else if (!maze[nextRow][nextCol] && !mark[nextRow][nextCol]) {
				mark[nextRow][nextCol] = 1;
				position.row = row; position.col = col; position, dir = ++dir;
				push(position);
				row = nextRow; col = nextCol; dir = 0;
			}
			else
				++dir;
		}
	}

	if (found) {
		printf("The path is:\n");
		printf("row col \n");
		for (i = 0; i <= top; i++)
			printf("%2d%5d", stack[i].row, stack[i].col);
		printf("%2d%5d\n", row, col);
		printf("%2d%5d\n", EXIT_ROW, EXIT_COL);
	}
	else
		printf("The maze does not have a path\n");
}	