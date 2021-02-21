#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
    int sum[8]={0};
	char answer='O';

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}
    sum[0]=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    sum[1]=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    sum[2]=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    sum[3]=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    sum[4]=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    sum[5]=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    sum[6]=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum[7]=mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2];
	////////////////////////////////////////
    for(k=0;k<8;k++){
        for(l=k+1;l<8;l++){
            if(sum[k]!=sum[l]){
                answer='X';
            }
        }
    }

	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
