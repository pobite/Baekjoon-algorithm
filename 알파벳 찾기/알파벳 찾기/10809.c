#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char S[100];
	scanf("%s", &S);
	
	int len = strlen(S);
	char* ptr = NULL;

	for (int i = 97; i <= 122; i++) {	// alphabet arrange
		
		ptr = strchr(S, i);
		if (ptr != NULL) {	// if alphabet is exist
			
			for (int j = 0; j < len; j++) {

				if (i == S[j]) {
					printf("%d ",j);
					break;
				}
			}
		}
		else {	// not exist
			printf("-1 ");

		}
	}
	
	return 0;
}