#include <stdio.h>

int main(void)
{
	char array[5][15];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 15; j++){
			array[i][j] = 0;
		}
	}
	for(int i = 0; i < 5; i++){
		scanf("%s", array[i]);
	}
	for(int j = 0; j < 15; j++){
		for(int  k = 0; k < 5; k++){
			if(array[k][j] != '\0'){
			printf("%c", array[k][j]);
			}
		}
	}
	return 0;
}