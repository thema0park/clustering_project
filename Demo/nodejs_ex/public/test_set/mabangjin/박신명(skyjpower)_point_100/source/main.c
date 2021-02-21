#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i, j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    answer = 'O';
    int std = 0;
    int temp_sum = 0;

    while(1){
        for(i = 0; i < MABANGJIN_SIZE; i++){
            std += mabangjin[0][i];
        }
        
        for(j = 0; j < MABANGJIN_SIZE; j++){
            int t1 = 0;
            int t2 = 0;
            for(i = 0; i < MABANGJIN_SIZE; i++){
                t1 += mabangjin[i][j];
                t2 += mabangjin[j][i];
            }
            if(t1 != std || t2 != std){
                answer = 'X';
                break;
            }
        }

        if(answer == 'X') break;
        
        // 대각선 검사
        temp_sum = 0;
        for(i = 0; i < MABANGJIN_SIZE; i++){
            temp_sum += mabangjin[i][i];
        }
        if(temp_sum != std){
            answer = 'X';
            break;
        }
        temp_sum = 0;
        for(i = 0; i < MABANGJIN_SIZE; i++){
            temp_sum += mabangjin[i][MABANGJIN_SIZE - i - 1];
        }
        if(temp_sum != std) answer = 'X';
        break;
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
