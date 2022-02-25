#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 7

int main() {

	int number[NUM];
	int sum = 0;
	int min = 101;

	for (int i = 0; i < NUM; i++) {
		scanf("%d", &number[i]);
	}

	for (int j = 0; j < NUM; j++) {

		if (number[j] % 2 != 0) {	// check odd number
			sum += number[j];

			if (min > number[j]) {	// check min number
				min = number[j];
			}
		}
	}

	if (sum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n", sum);
		printf("%d", min);
	}

}