#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum1[10]={0,};
    int sum2[10]={0,};
    int sum3 = 0;
    int sum4 = 0;
    int sum_tmp = 0;

    int cmp;

	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    
    for(k = 0; k < MABANGJIN_SIZE; k++) {
        for(l = 0; l < MABANGJIN_SIZE; l++) {
        sum1[k] += mabangjin[k][l];
        }
    }
    
    for(k = 0; k < MABANGJIN_SIZE; k++) {
        for(l = 0; l <MABANGJIN_SIZE; l++) {
            sum2[k] += mabangjin[l][k];
        }
    }

    for(k = 0; k < MABANGJIN_SIZE; k++) {
        sum3 += mabangjin[k][k];
    }

    for(k = 0; k < MABANGJIN_SIZE; k++) {
        sum4 += mabangjin[2 - k][2 - k];
    }

    for(k = 0; k < MABANGJIN_SIZE - 1; k++) {
        if(sum1[k] != sum1[k + 1]) {
            printf("X\n");
            return 0;
        }
        if(sum2[k] != sum2[ k + 1]) {
            printf("X\n");
            return 0;
        }

        if(sum1[k] != sum2[k]) {
            printf("X\n");
            return 0;
        }

        if(sum1[0] != sum3) {
            printf("X\n");
            return 0;
        }

        if(sum1[0] != sum4) {
            printf("X\n");
            return 0;
        }

        printf("O\n");
        return 0;

    }




	return 0;
}
