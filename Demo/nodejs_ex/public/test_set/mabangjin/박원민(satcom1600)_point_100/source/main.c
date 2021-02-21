#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l, i, j, sum, result;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    result = 0;
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        result += mabangjin[0][i];
    }

    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum = 0;
        for(j = 0; j < MABANGJIN_SIZE; j++) {
            sum += mabangjin[i][j];
        }
        if (sum != result) {
            printf("X\n");
            return 0;
        }
    }
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum = 0;
        for(j = 0; j < MABANGJIN_SIZE; j++) {
            sum += mabangjin[j][i];
        }
        if (sum != result) {
            printf("X\n");
            return 0;
        }
    }

    sum = 0;
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum += mabangjin[i][i];
    }
    if (sum != result) {
        printf("X\n");
           return 0;
    }

    sum = 0;
    for(i = 0; i < MABANGJIN_SIZE; i++) {
        sum += mabangjin[i][MABANGJIN_SIZE - i - 1];
    }
    if (sum != result) {
        printf("X\n");
           return 0;
    }

    printf("O\n");

	////////////////////////////////////////

	return 0;
}
