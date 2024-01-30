#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char word[100];
	int count = 0; //문자 개수

	scanf("%s", word);

	for (int i = 0; i < strlen(word); i++, count++) {
		if (word[i] == 'c')
			if (word[i+1] == '=' || word[i+1] == '-') //c=나 c-가 나오면
				i++; //문자를 하나로 묶어서 count를 한 번만 함

		if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=') // dz=가 나옴
				i += 2;
			else if (word[i + 1] == '-') // d-가 나옴
				i++;
		}
		if (word[i] == 'l')
			if (word[i+1] == 'j') // ij가 나옴
				i++;

		if (word[i] == 'n')
			if (word[i+1] == 'j') // nj가 나옴
				i++;

		if (word[i] == 's')
			if (word[i+1] == '=') // s=가 나옴
				i++;

		if (word[i] == 'z')
			if (word[i+1] == '=') // z=가 나옴
				i++;
	}

	printf("%d", count);
}
