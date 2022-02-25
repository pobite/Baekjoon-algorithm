#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= n-i; j++) {
			if (j == n - i) {
				for (int k = 0; k < i; k++) {
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
	return 0;
}
