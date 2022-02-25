#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, temp;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);

		if (temp > max) {
			max = temp;
		}

		if (temp < min) {
			min = temp;
		}
	}
	
	printf("%d %d", min, max);

}