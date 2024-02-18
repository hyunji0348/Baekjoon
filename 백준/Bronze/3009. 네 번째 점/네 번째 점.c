#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int arr[3][2];

	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	for (int i = 0; i < 2; i++) {
		if (arr[0][i] == arr[1][i])
			printf("%d ", arr[2][i]);
		else if (arr[1][i] == arr[2][i])
			printf("%d ", arr[0][i]);
		else
			printf("%d ", arr[1][i]);
	}
}

