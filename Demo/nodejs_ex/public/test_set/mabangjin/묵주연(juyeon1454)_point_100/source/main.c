#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
    
    	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}


    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum1+= mabangjin[0][l];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum2+= mabangjin[1][l];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum3+= mabangjin[2][l];
    }
   
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum4+= mabangjin[l][0];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum5+= mabangjin[l][1];
    }
    for (l = 0; l < MABANGJIN_SIZE; l++)
    {
        sum6+= mabangjin[l][2];
    }
    
    sum7=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    sum8=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
    
    if(sum1==sum2&&sum2==sum3&&sum3==sum4&&sum4==sum5&&sum5==sum6&&sum6==sum7&&sum7==sum8)
    {
        answer='O';
    }
    else
    {
        answer='X';
    }


	printf("%c\n",answer);

	return 0;
}
