#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				for (int k = 0; k <= n - i; k++) {
					printf("*");
				}
				for (int l = 1; l <= n - i; l++) {
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