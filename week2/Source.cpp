#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char x[10000];
	int y, i, count = 0;
	scanf("%[^\n]", x);
	y = strlen(x);
	for (i = 0; i < y; i++) {
		if (x[i] == 97 || x[i] == 101 || x[i] == 105 || x[i] == 111 || x[i] == 117) {
			printf("There is vowel = ");
			count++;
			break;
		}
		else if (x[i] == 65 || x[i] == 69 || x[i] == 73 || x[i] == 79 || x[i] == 85) {
			printf("There is vowel = ");
			count++;
			break;
		}
	}
	if (count == 0) { printf("There is not vowel"); }
	for (i = 0; i < y; i++) {
		if (x[i] == 97 || x[i] == 101 || x[i] == 105 || x[i] == 111 || x[i] == 117) {
			printf("%c ", x[i]);
		}
		else if (x[i] == 65 || x[i] == 69 || x[i] == 73 || x[i] == 79 || x[i] == 85) {
			printf("%c ", x[i]);
		}
	}

}