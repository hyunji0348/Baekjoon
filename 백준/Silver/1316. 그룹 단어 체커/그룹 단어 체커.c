#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int N;
	char word[100];
	int count = 0; //그룹 단어의 개수

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", word);
		char check[100]; //앞서 나온 글자들을 종류별 하나씩만 저장할 배열
		int checkindex = 0; //check배열의 인덱스 숫자(종류별로 글자가 하나씩만 있기 때문에 인덱스를 따로 관리해줘야함)
		int isgroup = 1; //1이면 그룹함수고 0이면 그룹 함수가 아님

		check[0] = word[0]; 
		for (int j = 1; j < strlen(word); j++) //word배열의 원소 하나씩 조사
			if (word[j] != check[checkindex]) { //연속이 끊기면
				for (int k = 0; k < checkindex; k++) { //check배열의 앞에 원소들과 비교
					if (word[j] == check[k]) //같은 원소가 발견되면
						isgroup = 0;//그룹 단어가 아님
				}
				checkindex++;
				check[checkindex] = word[j]; //새로운 단어는 check배열에 저장
			}

		//그룹 함수인지 판별
		if (isgroup == 1)
			count++;
	}

	printf("%d", count); //그룹 단어의 개수 출력
}
