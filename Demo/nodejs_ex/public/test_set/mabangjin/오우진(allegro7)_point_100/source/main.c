#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int constant = 0, sum = 0;
	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    // initialized constant
    for(k = 0 ; k < 1; k++){
        for(l = 0; l < MABANGJIN_SIZE; l++){
            sum += mabangjin[k][l];
        }
    }
    constant = sum;

    for(k = 0 ; k < MABANGJIN_SIZE; k++){
        sum = 0;
        for(l = 0; l < MABANGJIN_SIZE; l++){
            sum += mabangjin[k][l];
        }
        if(sum != constant)
            return printf("X\n");
        sum = 0;
        for(l = 0; l < MABANGJIN_SIZE; l++){
            sum += mabangjin[l][k];
        }
        if(sum != constant)
            return printf("X\n");
        sum = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
        if(sum != constant)
            return printf("X\n");
        sum = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];
        if(sum != constant)
            return printf("X\n");
    }

	////////////////////////////////////////

	printf("O\n");

	return 0;
}
