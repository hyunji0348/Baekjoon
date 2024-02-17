#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int arr[10000]; //N의 약수를 저장할 배열
	int index = 0, sum = 0;
	int i, N;

	scanf("%d", &N);

	while (N != -1) {
		index = 0;
		sum = 0;
		// N의 약수들의 합
		for (i = 1; i < N; i++) {
			if (N % i == 0) {
				sum += i;
				arr[index++] = i; // 출력을 위해 약수들 배열에 저장
			}
		}

		if (sum == N) { // 완전수일때 출력
			printf("%d = ", N);
			for (i = 0; i < index - 1; i++)
				printf("%d + ", arr[i]);
			printf("%d\n", arr[index - 1]);
		}
		else // 완전수가 아닐 때 출력
			printf("%d is NOT perfect.\n", N);

		// 다시 N입력
		scanf("%d", &N);
	}
}

