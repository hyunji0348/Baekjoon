#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int num;
	int change; // 입력할 거스름돈
	int cent[4] = { 0 }; // 쿼터, 다임, 니켈, 페니의 개수를 저장할 배열
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &change);
		while(change > 0){
			if (change >= 25) {
				change -= 25;
				cent[0]++;
			}
			else if (change >= 10) {
				change -= 10;
				cent[1]++;
			}
			else if (change >= 5) {
				change -= 5;
				cent[2]++;
			}
			else if (change >= 1) {
				change -= 1;
				cent[3]++;
			}
		}
		// 출력
		for (int i = 0; i < 4; i++) 
			printf("%d ", cent[i]);
		printf("\n");

		// cent배열 리셋
		for (int i = 0; i < 4; i++)
			cent[i] = 0;
	}

}
