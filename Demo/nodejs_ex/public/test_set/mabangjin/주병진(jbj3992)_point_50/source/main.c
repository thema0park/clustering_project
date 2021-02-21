#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int flat=0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE]; //3x3 행렬.
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    if(mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2] == 15 && mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2] == 15 && mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2] == 15)
    {
        flat=1;
    }

    if(mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0] == 15 && mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1] == 15 && mabangjin[0][3]+mabangjin[1][3]+mabangjin[2][3] == 15)
    {
        flat=1;
    }

    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2] == 15 && mabangjin[2][0]+mabangjin[1][1]+mabangjin[2][0] == 15)
    {
        flat=1;
    }

    if(flat==0)
    {
        answer='X';
    }

    if(flat==1)
    {
        answer='O';
    }

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
