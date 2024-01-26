#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 수 10개를 입력받은 뒤, 
// 이를 42로 나눈 나머지를 구한다.
// 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오

int main() {
    int num;
    int aa[10];
    int kind = 10;

    // 숫자 10개 입력 후 나머지 aa배열에 저장
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        aa[i] = num % 42;
    }

    for (int i = 0; i < 9; i++) 
        for (int k = i + 1; k < 10; k++) 
            if (aa[i] == aa[k]) {
                kind--;
                break;
            }

    printf("%d", kind);
}