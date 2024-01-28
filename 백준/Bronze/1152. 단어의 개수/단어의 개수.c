#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char S[1000000];
	int count = 0;

	gets(S); //문장 입력

	char* token = strtok(S, " ");
	while (token != NULL) //토큰이 비어있지 않을경우(문장이 끝나지 않았다면)
	{
		count++;
		token = strtok(NULL, " ");
	}
	printf("%d", count);
}
