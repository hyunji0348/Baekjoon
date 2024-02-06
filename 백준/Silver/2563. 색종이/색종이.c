#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int paper[100][100] = { 0 };
	int papernum;
	int wid, len;
	int blackarea = 0;

	scanf("%d", &papernum);

	for (int i = 0; i < papernum; i++) {
		scanf("%d %d", &wid, &len); //가로 세로 시작 위치 입력

		// 해당되는 위치의 값을 1로 바꿈
		for (int m = wid-1; m < wid + 9; m++) 
			for (int n = len-1; n < len + 9; n++) 
				paper[m][n] = 1;
	}

	//검은색 부분 계산
	for (int i = 0; i < 100; i++) 
		for (int k = 0; k < 100; k++)
			if (paper[i][k] == 1)
				blackarea++;
	printf("%d", blackarea);
}
