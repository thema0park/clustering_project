#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int sum[8] = {0,0,0,0,0,0,0,0};
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    for(k = 0; k<MABANGJIN_SIZE; k++){
        for(l=0; l<MABANGJIN_SIZE; l++){
            sum[k]=sum[k] + mabangjin[k][l];
        }
    }
    for(k = 0; k<MABANGJIN_SIZE; k++){
        for(l=0; l<MABANGJIN_SIZE; l++){
            sum[k+3]=sum[k+3] + mabangjin[l][k];
        }
    }
    sum[6] = mabangjin[0][0] + mabangjin[1][1]+mabangjin[2][2];
    sum[7] = mabangjin[0][2] + mabangjin[1][1]+ mabangjin[2][0];
    if(sum[0]==sum[1]&&sum[1]==sum[2]&&sum[2]==sum[3]&&sum[3]==sum[4]&&sum[4]==sum[5]&&sum[5]==sum[6]&&sum[6]==sum[7]){
        answer = 'O';
    }
    else
        answer = 'X';


	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
