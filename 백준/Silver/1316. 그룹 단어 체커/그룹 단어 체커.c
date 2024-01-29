#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int N;
	char word[100];
	int count = 0; //그룹 단어의 개수
	int isgroup = 0; //1이면 그룹함수고 0이면 그룹 함수가 아님

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", word);
		char check[100];
		int checkindex = 0;
		int isgroup = 1; //1이면 그룹함수고 0이면 그룹 함수가 아님

		check[0] = word[0]; 
		for (int j = 1; j < strlen(word); j++) 
			if (word[j] != check[checkindex]) { //연속이 끊기면
				for (int k = 0; k < checkindex; k++) { //check배열의 앞에 원소들과 비교
					if (word[j] == check[k]) //같은 원소가 발견되면
						isgroup = 0;//그룹 단어가 아님
				}
				checkindex++;
				check[checkindex] = word[j];
			}

		//그룹 함수인지 판별
		if (isgroup == 1)
			count++;
	}

	printf("%d", count);
}
