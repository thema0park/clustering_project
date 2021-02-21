#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    int sum_r1 = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    int sum_r2 = mabangjin[1][0] + mabangjin[1][1] + mabangjin[1][2];
    int sum_r3 = mabangjin[2][0] + mabangjin[2][1] + mabangjin[2][2];

    int sum_c1 = mabangjin[0][0] + mabangjin[1][0] + mabangjin[2][0];
    int sum_c2 = mabangjin[0][1] + mabangjin[1][1] + mabangjin[2][1];
    int sum_c3 = mabangjin[0][2] + mabangjin[1][2] + mabangjin[2][2];

    int sum_d1 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    int sum_d2 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];

    if(sum_r1 == sum_r2 && sum_r1 == sum_r3 && sum_r2 == sum_r3){
        if(sum_c1 == sum_c2 && sum_c1 == sum_c2){
            if(sum_d1 == sum_d2){
                answer = 'O';
            }
            else answer = 'X';
        }
        else answer = 'X';
    }
    else answer = 'X';

    



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
