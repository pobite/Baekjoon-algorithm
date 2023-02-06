#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000


struct Node {

	int item;
	struct Node* prev;
	struct Node* next;
};

struct Deque {

	struct Node* header;	// right
	struct Node* tailer;	// left
};


/* Initialization of Deque */
void init(struct Deque* dq) {

	dq->header = NULL;
	dq->tailer = NULL;

}


void push_front(struct Deque* dq, int key) {

	struct Node* node =  (struct Node*)malloc(sizeof(struct))
}

void push_back(int key) {

	if (front != rear) {

		back++

	}



}

int pop_front() {



}

int pop_back() {





}

int main() {


	struct Deque* deque;
	init(&deque);


	int n, key;
	scanf("%d", &n);

	char message[10];
	for (int i = 0; i < n; i++) {

		if (!strcmp(message, "push_front")) {


			scanf("%d", &key);
			printf("%d", push_front(&deque, key));


		}
		else if (!strcmp(message, "push_back")) {

			scanf("%d", &key);
			printf("%d", push_back(&deque, key));

		}
		else if (!strcmp(message, "pop_front")) {




		}
		else if (!strcmp(message, "pop_back")) {



		}
		else if (!strcmp(message, "size")) {



		}
		else if (!strcmp(message, "empty")) {



		}
		else if (strcmp(message, "front")) {



		}
		else {	// back



		}

	}

	free(deque);


	return 0;
}