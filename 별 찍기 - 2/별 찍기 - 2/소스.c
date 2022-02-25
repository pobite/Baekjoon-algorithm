#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int n; 
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (j == n) {
				for (int k = 0; k < i; k++) {
					printf("*");
				}
				break;
			}
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}