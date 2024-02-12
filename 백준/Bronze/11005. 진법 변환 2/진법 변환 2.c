#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int B;			// 진법
	long long int N;	// 입력받은 10진수 수
	int res[100];	// 나머지들을 저장할 배열(출력할 결과)
	int i = 0, count = 0;

	scanf("%lld %d", &N, &B);

	while (N != 0) { // 몫이 0이 되면 종료
		res[i++] = N % B;	// 나머지 저장	
		N = N / B;			// 몫 저장 
		count++;
	}

	// B진수로 변환된 N값 출력
	for (int j = count-1; j >= 0; j--) {
		if (res[j] >= 10) { // A~Z
			printf("%c", res[j] + 55);
		}
		else {	// 0~9
			printf("%d", res[j]);
		}
	}
}

