#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int len = 1;
	int num = 1;
	int N;
	
	scanf("%d", &N);

	while (1) {
		if (N == 1) {
			break;
		}
		else if (N > num) {
			num += len * 6;
			len++;
		}
		else
			break;
	}
	printf("%d", len);
}

