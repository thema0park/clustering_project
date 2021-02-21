#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int i, j, k, l;
    int sum[7];
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer = 'X';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k=0;k<MABANGJIN_SIZE; k++){
        for(l=0;l < MABANGJIN_SIZE; l++){
            sum[k]+=mabangjin[k][l];
        }
    }

    for(k=0;k<MABANGJIN_SIZE; k++){
        for(l=0;l < MABANGJIN_SIZE; l++){
            sum[k+3]+=mabangjin[l][k];
        }
    }

    for(k=0, l=0;k<MABANGJIN_SIZE && l < MABANGJIN_SIZE; k++, l++){
            sum[6]+=mabangjin[k][l];
            }

   for(k=0, l=MABANGJIN_SIZE-1; k<MABANGJIN_SIZE && l >=0; k++, l--){
            sum[7]+=mabangjin[k][l];
            }

    for(i=0;i<MABANGJIN_SIZE-1;i++){
        for(j=1; j<MABANGJIN_SIZE;j++){
            if(sum[i] == sum[j]){
                answer = 'O';
            }
        }
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
