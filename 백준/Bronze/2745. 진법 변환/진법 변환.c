#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int B;			// 진법
	char N[100];	// 10진법으로 바꿀 수
	int sum = 0;
	int alphanum;	// 문자를 숫자로 치환해서 저장할 변수
	int len;

	scanf("%s %d", N, &B);
	len = strlen(N);

	for (int i = 0; i < len; i++) {
		if (('A' <= N[i]) && ('Z' >= N[i])) { // A~Z
			alphanum = N[i] - 55; // A는 10으로 alphanum에 저장
			sum += alphanum * pow(B,(len - i - 1));
		}
		else {	// 0~9
			alphanum = N[i] - '0';
			sum += alphanum * pow(B, (len - i - 1));
		}	
	}

	printf("%d", sum);
}

