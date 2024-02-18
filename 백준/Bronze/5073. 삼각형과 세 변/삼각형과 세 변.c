#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

int main() {
	int a, b, c;

	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 || b == 0 || c == 0) // 0 0 0입력시 종료
			break;

		if (a >= b && a >= c) {
			if (a >= b + c) {
				printf("Invalid\n");
				continue;
			}
		}
		else if (b >= a && b >= c) {
			if (b >= a + c) {
				printf("Invalid\n");
				continue;
			}
		}
		else if (c >= a && c >= b) {
			if (c >= a + b) {
				printf("Invalid\n");
				continue;
			}
		}

		if (a == b && a == c && b == c) 
			printf("Equilateral\n");
		else if (a != b && a != c && b != c) 
			printf("Scalene\n");
		else
			printf("Isosceles\n");
	}
}

