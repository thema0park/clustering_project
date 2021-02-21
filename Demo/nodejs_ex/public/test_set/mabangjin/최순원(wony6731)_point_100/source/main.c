#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	int plus_answer = 0;
    int plus_value = 0;
    char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		scanf("%d %d %d", &mabangjin[k][0], &mabangjin[k][1], &mabangjin[k][2]);
	}

	////////////////////////////////////////
    plus_answer = mabangjin[0][0] + mabangjin[0][1] + mabangjin[0][2];
    
    // 가로 합
    for(k = 0; k < MABANGJIN_SIZE; k++)
    {
        for(l = 0; l < MABANGJIN_SIZE; l++)
        {
            plus_value = plus_value + mabangjin[k][l];
        }
        if(plus_answer != plus_value)
        {
            answer = 'X';
            printf("%c\n",answer);
            return 0;
        }
        else
            plus_value = 0;
    }
    // 세로 합
    for(l = 0; l < MABANGJIN_SIZE; l++)
    {
        for(k = 0; k < MABANGJIN_SIZE; k++)
        {
            plus_value = plus_value + mabangjin[k][l];
        }
        if(plus_answer != plus_value)
        {
            answer = 'X';
            printf("%c\n",answer);
            return 0;
        }
        else
            plus_value = 0;
    }
    // 대각선 합
    for(k = 0; k < MABANGJIN_SIZE; k++)
    {
        plus_value = plus_value + mabangjin[k][k];
    }
    if(plus_answer != plus_value)
    {
        answer = 'X';
        printf("%c\n",answer);
        return 0;
    }
    else
        plus_value = 0;
    // 대각선 합
    for(k = 0; k < MABANGJIN_SIZE; k++)
    {
        plus_value = plus_value + mabangjin[k][MABANGJIN_SIZE-(k+1)];
    }
    if(plus_answer != plus_value)
    {
        answer = 'X';
        printf("%c\n",answer);
        return 0;
    }
    else
    {
        answer = 'O';
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
