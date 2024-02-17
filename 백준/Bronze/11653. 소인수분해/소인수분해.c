#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int N;

	scanf("%d", &N);

	while (N != 1)  // N을 나눈 몫이 1이 될 때까지
		for (int i = 2; i <= N; i++) 
			if (N % i == 0) {
				printf("%d\n", i);
				N = N / i;
				break;
			}
}

