#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int test;
	int number;
	scanf("%d", &test);

	for (int i = 0; i < test; i++) {
		
		int index = 0;
		scanf("%d", &number);

		while (1) {

			if (number % 2 == 1) {
				printf("%d ", index);
			}

			if (number / 2 == 0) {
				printf("\n");
				break;
			}

			number = number / 2;
			index++;
		}
		
	}
}