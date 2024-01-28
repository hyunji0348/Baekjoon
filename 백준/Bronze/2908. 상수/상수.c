#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char a[4], b[4];
	char backA[4], backB[4];

	scanf("%s %s", a, b);

	for (int i = 0; i < 3; i++) {
		backA[i] = a[2 - i];
		backB[i] = b[2 - i];
	}
	backA[3] = '\0';
	backB[3] = '\0';

	if (atoi(backA) > atoi(backB)) //atoi함수 -> 숫자 문자열을 int형으로 반환(연산이 가능해짐)
		puts(backA);
	else
		puts(backB);
}
