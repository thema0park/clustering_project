#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int re[8];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    
    re[6] = mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    re[7] = mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];

	////////////////////////////////////////
    for (k = 0; k < MABANGJIN_SIZE; k++)
	{
        re[k] = mabangjin[0][k]+mabangjin[1][k]+mabangjin[2][k];
	}
    for (k = 0; k < MABANGJIN_SIZE; k++)
	{
        re[k+3] = mabangjin[k][0]+mabangjin[k][1]+mabangjin[k][2];
	}

    if (re[0]==re[1]&&re[2]==re[3]&&re[4]==re[5]&&re[6]==re[7])
    {
        answer = 'O';
    }
    else answer = 'X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
