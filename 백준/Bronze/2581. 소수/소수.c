#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

// 소수인지 아닌지 판별하는 함수
int isdecimal(int n) {
	if (n == 1) // 1은 예외처리
		return 0;
	
	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return 0; // 소수가 아님
	return 1; // 소수임
}

int main() {
	int first = -1; // 첫번째로 나오는 최소 소숫값
	int index = 0, sum = 0;
	int M, N;

	scanf("%d %d", &M, &N);
	
	for (int i = N; i >= M; i--) {
		if (isdecimal(i) == 1){ // 소수인지 아닌지 판별
			sum += i;
			first = i;
		} 
	}

	if (first == -1) // 소수가 없음
		printf("-1");
	else {
		printf("%d\n", sum);
		printf("%d", first);
	}
}

