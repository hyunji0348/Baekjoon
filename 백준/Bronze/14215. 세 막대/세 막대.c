#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
int maxlen(int max, int x, int y) {
	while (max >= x + y) 
		max--;
	printf("%d", max + x + y);
}
int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) {
		maxlen(a, b, c);		
	}
	else if (b >= a && b >= c) {
		maxlen(b, a, c);
	}
	else if (c >= a && c >= b) {
		maxlen(c, a, b);
	}
}

