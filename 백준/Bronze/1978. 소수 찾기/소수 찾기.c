#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

// 소수인지 아닌지 판별하는 함수
int isdecimal(int n) {
	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return 0; // 소수가 아님
	return 1; // 소수임
}

int main() {
	int N, n;
	int num = 0; // 소수의 개수

	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		if (isdecimal(n) == 1 && n != 1){ // 소수인지 아닌지 판별
			num++;
		} 
	}
	printf("%d", num);
}

