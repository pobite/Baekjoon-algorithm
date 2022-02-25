#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n;
	int number[50];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &number[i]);
	}

	int max = number[0];
	int min = number[0];

	for (int j = 1; j < n; j++) {

		if (max > number[j]) {
			max = number[j];
		}
		if (min < number[j]) {
			min = number[j];
		}
	}

	printf("%d", max * min);
	return 0;
}