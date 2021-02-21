#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int i = 0, j = 0;
    int sum1= 0, sum2 = 0, sum3 = 0;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
   sum1 = mabangjin[0][0] + mabangjin[1][0]+mabangjin[2][0];
   sum2 = mabangjin[0][0]+ mabangjin[0][1]+ mabangjin[0][2];
   sum3 = mabangjin[0][0]+ mabangjin[1][1]+ mabangjin[2][2];
   if (sum1 == sum2&&sum2 == sum3 && sum1 == sum3){
       answer = 'O';
   }
   else {
       answer = 'X';
   }
	printf("%c\n",answer);

	return 0;
}
