#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	char subject[51];	// 과목명
	float GPA;			// 학점
	char grade[3];		// 등급
	float sum = 0;		// (학점 × 과목평점)의 합
	float GPAsum = 0;		// 학점 총합
	float gradescore;	// 숫자로 환산한 등급을 저장하는 변수

	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", subject, &GPA, grade);
		GPAsum += GPA; 

		// 문자grade를 숫자로 환산해 gradescore에 저장
		gradescore = 0;
		if (grade[1] == '+') // +이 붙은 등급이면 0.5점 추가
			gradescore += 0.5;

		if (grade[0] == 'A') {
			gradescore += 4;
		}
		else if(grade[0] == 'B'){
			gradescore += 3;
		}
		else if(grade[0] == 'C'){
			gradescore += 2;
		}
		else if (grade[0] == 'D') {
			gradescore += 1;
		}
		else if (grade[0] == 'P') { 
			GPAsum -= GPA; // P는 학점이 무효이므로 학점을 다시 뺌
		}
		sum += GPA * gradescore;
	}

	//if (GPAsum == 0) // 모든 과목이 F나 P일 경우
	//	printf(0);
	//else
		printf("%f", sum / GPAsum);
}
