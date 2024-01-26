#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int N, M; // 바구니 개수, 바꿀 횟수
    int a, b; 
    int aa[101];
    int temp;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) // 바구니에 숫자 채우기
        aa[i] = i + 1;

    for (int i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        for(temp = 0; a <= b; a++,b--){
            temp = aa[a-1];
            aa[a-1] = aa[b-1];                    
            aa[b-1] = temp;
        }
    }
    // 바뀐 바구니 출력
    for (int i = 0; i < N; i++) {
        printf("%d ", aa[i]);
    }
}