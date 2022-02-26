#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 10000

int top = -1;
int stack[MAX];


int push(int key) {

	if (!isFull()) {
		
		top++;
		stack[top] = key;
		return 1;
	}
	return 0;
}

int pop() {

	if (!isEmpty()) {

		int val = stack[top];
		top--;
		return val;
	}
	return 0;
}


int isEmpty() {

	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}


int isFull() {

	if (top == MAX - 1) {
		return 1;
	}
	else {
		return 0;
	}
}


int main() {

	int n, key = 0;
	char message[6] = { 0, };
	scanf("%d", &n);

	
	for (int i = 0; i < n; i++) {
		
		scanf("%s", message);
		

		if (strcmp(message, "push") == 0) {			// push
			
			scanf("%d", &key);
			push(key);

		}
		else if (strcmp(message, "pop") == 0) {		// pop

			if (isEmpty() == 0) {
				printf("%d\n", pop());
			}
			else {
				printf("-1\n");
			}
			

		}
		else if (strcmp(message, "size") == 0) {	// size

			printf("%d\n", top + 1);

		}
		else if (strcmp(message, "empty") == 0) {	// empty

			if (isEmpty() == 1) {

				printf("1\n");

			}
			else {
				printf("0\n");
			}

		}
		else {			// top

			if (isEmpty() == 1) {
				printf("-1\n");
			}
			else {
				printf("%d\n", stack[top]);
			}
		}

	}

	return 0;

}