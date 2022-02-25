#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		
		for (int j = i; j <= n; j++) {
			if (j == n) {
				for (int k = 1; k <= i; k++) {
					printf("*");
				}
				for (int l = 1; l < i; l++) {
					printf("*");
				}
				break;
			}
			printf(" ");
		}
		printf("\n");
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				for (int k = i; k <= n; k++) {
					printf("*");
				}
				for (int l = i; l < n; l++) {
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