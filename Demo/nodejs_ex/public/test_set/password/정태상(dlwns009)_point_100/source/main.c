#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MABANGJIN_SIZE 3

int main()
{
	int k, l;
    int a, b;
	int mabangjin[MABANGJIN_SIZE][MABANGJIN_SIZE];
	char answer;

	for (k = 0; k < MABANGJIN_SIZE; k++)
	{
		for (l = 0; l < MABANGJIN_SIZE; l++)
			scanf("%d", &mabangjin[k][l]);
	}

	////////////////////////////////////////
if(mabangjin[0][1]+mabangjin[0][2]==mabangjin[1][0]+mabangjin[2][0])
answer='O';
else
answer='X';




	////////////////////////////////////////

	printf("%c\n",answer);

	return 0;
}
