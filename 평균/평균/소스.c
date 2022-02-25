#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, max = 0;
	int number[1000];
	float sum = 0;
	
	scanf("%d", &n);

	
	for (int i = 0; i < n; i++) {
		scanf("%d", &number[i]);
		
		if (number[i] > max) {
			max = number[i];
		}
	}

	for (int j = 0; j < n; j++) {
		sum += (float) number[j] / max * 100;
	}

	printf("%f", sum / n);

	return 0;
}