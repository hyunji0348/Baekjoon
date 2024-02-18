#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int x, y, w, h;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	int wid = w - x;
	int len = h - y;

	int min1, min2;

	if (wid >= len) // min1 -> 오른쪽 변과 윗변까지의 거리 중 짧은 쪽
		min1 = len;
	else
		min1 = wid;

	if (x >= y) // min2 -> 왼쪽 변과 아랫변까지의 거리 중 짧은 쪽
		min2 = y;
	else
		min2 = x;

	if (min1 >= min2) // 가장 거리가 짧은 길이 출력
		printf("%d", min2);
	else
		printf("%d", min1);
}

