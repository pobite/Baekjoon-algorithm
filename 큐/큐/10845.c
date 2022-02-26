#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000


int front = 0, rear = 0;
int stack[MAX];


void push(int key) {

	if (front != MAX -1) {

		stack[rear] = key;
		rear++;
	}

}

int pop() {

	if (front != rear) {

		int key = stack[front];
		front++;
		return key;

	}
	else {
		return -1;
	}
}

int main() {

	int n, val;
	char message[6];
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {

		scanf("%s", message);


		if (strcmp(message, "push") == 0) {

			scanf("%d", &val);
			push(val);

		}
		else if (strcmp(message, "pop") == 0) {
			
			printf("%d\n", pop());

		}
		else if (strcmp(message, "size") == 0) {

			printf("%d\n", rear - front);

		}
		else if (strcmp(message, "empty") == 0) {

			if (front == rear) {
				printf("1\n");
			}
			else {
				printf("0\n");
			}
		}
		else if (strcmp(message, "front") == 0) {

			if (front != rear) {
				printf("%d\n", stack[front]);
			}
			else {
				printf("-1\n");
			}


		}
		else {	// back

			if (front != rear) {
				printf("%d\n", stack[rear - 1]);
			}
			else {
				printf("-1\n");
			}

		}

	}

	return 0;
}