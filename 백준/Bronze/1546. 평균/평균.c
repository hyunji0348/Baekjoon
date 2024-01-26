#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N; //시험 개수
	float test[1000];
	float max = -1;
	float sum = 0;

	//시험 개수 입력
	scanf("%d", &N);
	//시험 점수 입력
	for (int i = 0; i < N; i++) {
		scanf("%d", &test[i]);
	}
	//최대값 찾기
	for (int i = 0; i < N; i++) {
		if (test[i] > max)
			max = test[i];
	}
	//점수/M*100 하기
	for (int i = 0; i < N; i++) {
  		test[i] = (test[i] / max * 100);
	}
	//평균값 구하기
	for (int i = 0; i < N; i++) {
		sum += test[i];
	}

	//결과값 출력
	printf("%f", sum / N);
}