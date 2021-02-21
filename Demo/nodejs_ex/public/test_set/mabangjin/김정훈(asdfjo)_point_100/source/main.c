#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int sum1 , sum2 ,sum3 ,sum4 ,sum5,sum6,sum7,sum8;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

    sum1 = mabangjin[0][0]+ mabangjin[0][1]+ mabangjin[0][2];
    sum2 = mabangjin[1][0]+ mabangjin[1][1]+ mabangjin[1][2];
    sum3 = mabangjin[2][0]+ mabangjin[2][1]+ mabangjin[2][2];
    sum4 = mabangjin[0][0]+ mabangjin[1][0]+ mabangjin[2][0];
    sum5 = mabangjin[0][1]+ mabangjin[1][1]+ mabangjin[2][1];
    sum6 = mabangjin[0][2]+ mabangjin[1][2]+ mabangjin[2][2];
    sum7 = mabangjin[0][0]+ mabangjin[1][1]+ mabangjin[2][2];
    sum8 = mabangjin[0][2]+ mabangjin[1][1]+ mabangjin[2][0];

    if((sum1 == sum2)&&(sum2 == sum3)&&(sum3 == sum4)&&(sum4 == sum5)&&(sum5 == sum6)&&(sum6 == sum7)&&(sum7 == sum8))
    answer = 'O';
    else
    answer = 'X';

    

	////////////////////////////////////////



	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
