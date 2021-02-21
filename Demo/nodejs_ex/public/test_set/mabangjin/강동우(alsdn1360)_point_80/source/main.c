#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int i, k;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	int sum1=0, sum2=0,sum3=0,sum4=0;
    int flag = 0;
    char answer;

	for (i = 0; i < MABANGJIN_SIZE; i++)
	{
		for (k = 0; k < MABANGJIN_SIZE; k++)
			scanf("%d", &mabangjin[i][k]);
	}
    for(i=0;i<3;i++)
    {
        for(k=0;k<3;k++)
        {
            sum1 += mabangjin[i][k];
        }
    }
    for(i=0;i<3;i++)
    {
        for(k=0;k<3;k++)
        {
            sum2 += mabangjin[k][i];
        }
    }
    sum3 = mabangjin[0][0] + mabangjin[1][1] + mabangjin[2][2];
    sum4 = mabangjin[0][2] + mabangjin[1][1] + mabangjin[2][0];

    if(sum1/3 == sum2/3) flag++;
    if(sum1/3 == sum3) flag++;
    if(sum1/3 == sum4) flag++;
    if(sum2/3 == sum3) flag++;
    if(sum2/3 == sum4) flag++;
    if(sum3 == sum4) flag++;


    if(flag == 6)
    {
        answer = 'O';
    }
    else answer = 'X';

    printf("%c\n", answer);
	return 0;
}
