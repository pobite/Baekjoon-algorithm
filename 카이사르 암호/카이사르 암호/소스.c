#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	char str[1000];
	scanf("%s", str);

	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] >= 68) {
			str[i] = str[i] - 3;
		}
		else {
			str[i] = str[i] + 23;
		}
			
	}
	printf("%s", str);
	return 0;
}
