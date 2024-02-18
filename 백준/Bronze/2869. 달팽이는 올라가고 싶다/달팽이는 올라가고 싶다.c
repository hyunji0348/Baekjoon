#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int A, B, V;
	int N = 0; // 총 걸린 일 수

	scanf("%d %d %d", &A, &B, &V);

	N = (V - B - 1) / (A - B) + 1;
	printf("%d", N);
}

