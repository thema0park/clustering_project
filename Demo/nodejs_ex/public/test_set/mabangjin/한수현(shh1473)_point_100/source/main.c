#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////

    int i, j;
    int sum = 0;
    int check = 0;
    int firstSum = 0;
    for (i = 0; i < 3; ++i)
    {
        sum = 0;

        for (j = 0; j < 3; ++j)
        {
            sum += mabangjin[i][j];
        }

        if (check == 0)
        {
            firstSum = sum;
        }

        if (firstSum != sum)
        {
            printf("X\n");
            return 0;
        }
    }

    for (i = 0; i < 3; ++i)
    {
        sum = 0;
        
        for (j = 0; j < 3; ++j)
        {
            sum += mabangjin[j][i];
        }

        if (firstSum != sum)
        {
            printf("X\n");
            return 0;
        }
    }

    sum = 0;

    for (i = 0; i < 3; ++i)
    {
        sum += mabangjin[i][i];
    }

    if (firstSum != sum)
    {
        printf("X\n");
        return 0;
    }

    sum = 0;

    for (i = 0; i < 3; ++i)
    {
        sum += mabangjin[2 - i][i];
    }

    if (firstSum != sum)
    {
        printf("X\n");
        return 0;
    }

    printf("O\n");

	////////////////////////////////////////

	return 0;
}
