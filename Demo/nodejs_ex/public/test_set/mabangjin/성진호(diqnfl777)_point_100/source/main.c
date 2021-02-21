#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer ='O';
    int asum=0,sum=0;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++){
            scanf("%d", &mabangjin[k][l]);
            if(k==0)
                asum+= mabangjin[k][l];
        }	
	}
    for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++){
            sum+= mabangjin[k][l];
        }
        if(sum!=asum){
            answer = 'X';
            break;
        }
        sum=0;
	}
    for (l = 0; l < MABANGJIN_SIZE; l++){
        for (k = 0; k < MABANGJIN_SIZE; k++){
            sum+=mabangjin[k][l];
        }
        if(sum!=asum){
            answer ='X';
            break;
        }
        sum=0;
    }
    if(mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2]!=asum||mabangjin[2][0]+mabangjin[1][1]+mabangjin[0][2]!=asum)
        answer = 'X';

	printf("%c\n",answer);

	return 0;
}
