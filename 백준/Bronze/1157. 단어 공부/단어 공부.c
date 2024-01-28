#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
	char word[1000000];
	int num[26] = { 0 };
	int max = -1;
	int dup = 0; //가장 많은 알파벳 중복 확인
	int maxindex;

	gets(word);
	int len = strlen(word);

	for (int i = 0; i < len; i++) {
		if (word[i] >= 'A' && word[i] <= 'Z') //문자가 대문자일 경우
			num[word[i] - 'A']++;
		else // 문자가 소문자일 경우
			num[word[i] - 'a']++;
	}

	// 가장 많은 문자의 개수 구하기
	for (int i = 0; i < 26; i++) 
		if (max <= num[i]) { 
			if (max == num[i])	// 개수가 중복일경우
				dup = 1;
			else			// 개수가 중복이 아닐경우
				dup = 0;
			max = num[i];
			maxindex = i;
		}
	
	if (dup == 1) // 중복일경우
		printf("?");
	else		 // 중복이 아닐경우
		printf("%c", maxindex + 65);

}
