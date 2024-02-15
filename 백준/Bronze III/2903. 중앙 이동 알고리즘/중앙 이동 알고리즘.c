#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int N;
	int a = 2;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		a = 2 * a - 1;
	}
	printf("%d", a * a);
}

