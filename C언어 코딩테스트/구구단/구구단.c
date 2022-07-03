#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int start;
	int end;
	int i, j;
	
	while (1) {
		scanf("%d %d", &start, &end);
		if (2 <= start <= 9 && 2 <= end <= 9) {
			break;
		}
		else {
			printf("INPUT ERROR!\n");
		}
	}
	if (start < end) {
		for (i = 1; i < 10; i++) {
			for (j = start; j <= end; j++) {
				printf("%d * %d = %d%s", j, i, j * i,"   ");
			}
			printf("\n");
		}
	}
	else {
		for (i = 1; i < 10; i++) {
			for (j = start; j >= end; j--) {
				printf("%d * %d = %d%s", j, i, j * i,"   ");
			}
			printf("\n");
		}
	}
	return 0;
}
