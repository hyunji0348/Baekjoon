#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ispalindrome(char *word) {
	for (int i = 0; i < strlen(word) / 2; i++) 
		if (word[i] != word[strlen(word) - i - 1]) { //중간에 다른 문자가 있다면
			return 0;								// 0값 반환
		}
	return 1; 
}

int main() {
	char word[101];

	gets(word);

	printf("%d", ispalindrome(word));
}
