#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int B;			// 진법
	char N[100];	// 10진법으로 바꿀 수
	int sum = 0;
	int alphanum;	// 알파벳을 숫자로 치환해서 저장할 변수
	int len;

	scanf("%s %d", N, &B);
	len = strlen(N);

	for (int i = 0; i < len; i++) {
		if(len == i-1) {	// 1의 자리의 수
			if ('A' < N[i] && 'Z' > N[i]) { // A~Z
				alphanum = N[i] - 55;
				sum += alphanum;
			}
			else	// 0~9
				sum += atoi(N[i]);
		}

		else {		// 1이 아닌 자리의 수
			if (('A' <= N[i]) && ('Z' >= N[i])) { // A~Z
				alphanum = N[i] - 55;
				sum += alphanum * pow(B,(len - i - 1));
			}
			else {	// 0~9
				alphanum = N[i] - 48;
				sum += alphanum * pow(B, (len - i - 1));
			}
		}
	}

	printf("%d", sum);
}

