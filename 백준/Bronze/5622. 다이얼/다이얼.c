#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char word[16];
	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int sum = 0;
	int indexnum;

	gets(word);

	for (int i = 0; i < strlen(word); i++) {
		indexnum = word[i] - 65;
		sum += time[indexnum];
	}printf("%d", sum);
}
