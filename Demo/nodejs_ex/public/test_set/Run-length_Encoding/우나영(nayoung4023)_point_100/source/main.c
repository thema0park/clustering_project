#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l,i,j;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;
    int error[10]={0};

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
    error[0]=mabangjin[0][0]+mabangjin[0][1]+mabangjin[0][2];
    error[1]=mabangjin[1][0]+mabangjin[1][1]+mabangjin[1][2];
    error[2]=mabangjin[2][0]+mabangjin[2][1]+mabangjin[2][2];
    error[3]=mabangjin[0][0]+mabangjin[1][0]+mabangjin[2][0];
    error[4]=mabangjin[0][1]+mabangjin[1][1]+mabangjin[2][1];
    error[5]=mabangjin[0][2]+mabangjin[1][2]+mabangjin[2][2];
    error[6]=mabangjin[0][0]+mabangjin[1][1]+mabangjin[2][2];
    error[7]=mabangjin[0][2]+mabangjin[1][1]+mabangjin[2][0];
    answer='O';
    for(i=0;i<MABANGJIN_SIZE;i++)
    {
        for(j=i+1;j<MABANGJIN_SIZE;j++)
        {
            if(error[i]!=error[j])
            {
                answer='X';
            }
        }
    }
	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
