#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 9

int main() {

	int n[NUM];
	int max = 0;
	int index;

	for (int i = 0; i < NUM; i++) {	
		scanf("%d", &n[i]);
		if (n[i] > max) {
			max = n[i];
			index = i;
		}
	}
	printf("%d\n%d", max, index + 1);
	return 0;
}